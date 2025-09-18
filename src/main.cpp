#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "VMGrammarLexer.h"
#include "VMGrammarParser.h"
#include "VMGrammarBaseListener.h"
#include "VM.hpp"
#include "VMListener.hpp"
#include "Program.hpp"
#include <memory>
#include "VMState.hpp"

using namespace antlr4;

bool ishalt_program = false; 

int main(int argc, const char* argv[]) {
    (void)argc;  
    
    try {
        std::ifstream stream;
        stream.open(argv[1]);
        
        if (!stream.is_open()) {
            std::cerr << "Error: Could not open file " << argv[1] << std::endl;
            return 1;
        }

        ANTLRInputStream  input(stream);
        VMGrammarLexer    lexer(&input);
        CommonTokenStream tokens(&lexer);
        VMGrammarParser   parser(&tokens);


        tree::ParseTree *tree = parser.program();
        
        auto vms  = std::make_unique<VMState>() ;

        VMListener listener(vms.get());
        
        tree::ParseTreeWalker walker;
        
        walker.walk(&listener, tree);
        
        listener.finalizeProgram();
        
        Program& programAST = listener.getProgramAST();

        programAST.executeProgram(vms.get());
        
        
    }
    catch (const std::exception& e) {
        std::cerr << std::string("Error at ") + __FILE__ + ": " + std::to_string(__LINE__) << e.what() << std::endl;
        return 1;
    }

    return 0;
}