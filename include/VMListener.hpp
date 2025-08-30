
#include "VMGrammarBaseListener.h"



class VMListener : public VMGrammarBaseListener 
{

    public:

        VMListener()  {};
        ~VMListener() {};

        void enterInstruction(VMGrammarParser::InstructionContext * ctx) override ;
        void enterOpcode(VMGrammarParser::OpcodeContext * ctx) override ;
        void enterOperand(VMGrammarParser::OperandContext * ctx) override;
        void enterMemory_address(VMGrammarParser::Memory_addressContext * ctx);
        void enterImmediate(VMGrammarParser::ImmediateContext * ctx) override;
        void enterLabel(VMGrammarParser::LabelContext * ctx) override;
        void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override ;
        
};
