#include "VMListener.hpp"





void VMListener::enterInstruction(VMGrammarParser::InstructionContext * ctx) 
{
    std::cout << "Instruction :  " << ctx->getText() << '\n';

}


void VMListener::enterOpcode(VMGrammarParser::OpcodeContext * ctx)
{
    std::cout << "Opcode :  " << ctx->getText() << '\n';
}


void VMListener::enterOperand(VMGrammarParser::OperandContext * ctx)
{
    std::cout << "Operand :  " << ctx->getText() << '\n';
}


void VMListener::enterMemory_address(VMGrammarParser::Memory_addressContext * ctx)
{
    std::cout << "Memory_address :  " << ctx->getText() << '\n';
}


void VMListener::enterImmediate(VMGrammarParser::ImmediateContext * ctx)
{
    std::cout << "Immediate :  " << ctx->getText() << '\n';
}


void VMListener::enterLabel(VMGrammarParser::LabelContext * ctx)
{
    std::cout << "Label :  " << ctx->getText() << '\n';
}

void VMListener::visitErrorNode(antlr4::tree::ErrorNode *node) {
    std::cerr << "Parse tree contains error node: " 
              << node->getText() << std::endl;
}











