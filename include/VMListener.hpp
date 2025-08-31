#ifndef VMLISTENER_HPP
#define VMLISTENER_HPP

#include "Program.hpp"
#include "VMGrammarBaseListener.h"
#include <memory>


class VMListener : public VMGrammarBaseListener 
{
    private : 
        
        std::unique_ptr<Program> ProgATS;
        std::vector<std::unique_ptr<IInstruction>> TmpInst;

    public:

        VMListener() ;
        ~VMListener() {};

        void enterInstruction(VMGrammarParser::InstructionContext * ctx) override ; 
        void enterOpcode(VMGrammarParser::OpcodeContext * ctx) override ;
        void enterOperand(VMGrammarParser::OperandContext * ctx) override;
        void enterMemory_address(VMGrammarParser::Memory_addressContext * ctx);
        void enterImmediate(VMGrammarParser::ImmediateContext * ctx) override;
        void enterLabel(VMGrammarParser::LabelContext * ctx) override;
        void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override ;
        void enterString_literal(VMGrammarParser::String_literalContext * ctx) override;
        void enterLabel_definition(VMGrammarParser::Label_definitionContext * /*ctx*/) override ;


        void finalizeProgram() ;
        Program& getProgramAST() const {
            return *ProgATS;  
    }
        
};


#endif
