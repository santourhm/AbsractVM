#include "VMListener.hpp"
#include "IInstruction.hpp"
#include "WSTR.hpp"
#include <memory>
#include "StringLiteralOperand.hpp"


VMListener::VMListener()  : ProgATS(std::make_unique<Program>()) {}


void VMListener::enterInstruction(VMGrammarParser::InstructionContext *ctx) 
{
    std::cout << "Instruction : " << ctx->getText() << '\n';

    size_t numOperands = ctx->operand().size();

    std::unique_ptr<IInstruction> inst; 
    std::vector<std::unique_ptr<Operand>> operands; 

    auto opcodeCtx = ctx->opcode();
    auto operandCtxs = ctx->operand();
    
    try {
        if (opcodeCtx->WSTR()) 
        {
            if (operandCtxs.size() != 1) 
            {
                throw std::runtime_error("Error: WSTR needs exactly one operand");
            }
            
            operands.push_back(std::make_unique<StringLiteralOperand>(
                operandCtxs[0]->getText()   
            ));

            inst = std::make_unique<WSTR>(std::move(operands));
        }
       
        ProgATS->addIntruction(std::move(inst));
    } 
    catch (const std::runtime_error &e) {
        std::cerr << "Semantic Error on line " 
                  << ctx->getStart()->getLine() 
                  << ": " << e.what() << std::endl;
    }
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








