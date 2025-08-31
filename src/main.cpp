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

using namespace antlr4;


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
        
        
        VMListener listener;
        tree::ParseTreeWalker walker;

        walker.walk(&listener, tree);

        const Program& programAST = listener.getProgramAST();
        const std::vector<std::unique_ptr<IInstruction>>& insts = programAST.getInstructions();
        for (const auto& instruction : insts) 
        {
            instruction->execute();
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}