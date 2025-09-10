#include "VMListener.hpp"
#include "IInstruction.hpp"
#include "WSTR.hpp"
#include "LOAD.hpp"
#include "WINT.hpp"
#include "ADD.hpp"
#include "MUL.hpp"
#include "OPP.hpp"
#include "REM.hpp"
#include "QUO.hpp"
#include "SUB.hpp"
#include <memory>
#include "StringLiteralOperand.hpp"
#include "VMGrammarParser.h"
#include "Register.hpp"
#include "ImmediateOperand.hpp"
#include "RRegOperand.hpp"

VMListener::VMListener(VMState * vms)  : ProgATS(std::make_unique<Program>()), vms(vms) {}

std::unique_ptr<RRegOperand> static parseRm_Operand(VMGrammarParser::OperandContext *operand, VMState * vs) {
    if (!operand->register_()) {
        throw std::runtime_error("Error: expected RREGISTER operand");
    }

    std::string regText = operand->register_()->RREGISTER()->getText();
    int regIndex = -1;
    if (!regText.empty() && regText[0] == 'R') {
        try {
            regIndex = std::stoi(regText.substr(1));
        } catch (const std::exception &) {
            throw std::runtime_error("Error: invalid register number in " + regText);
        }
    } else {
        throw std::runtime_error("Error: invalid register format in " + regText);
    }

    RRegister *reg = vs->getEnv_Registers()->getR(regIndex);
    return std::make_unique<RRegOperand>(reg);
}

std::unique_ptr<ImmediateOperand> static parseImm_Operand(VMGrammarParser::OperandContext *operand, VMState * vs) {
    if (!operand->immediate()) {
        throw std::runtime_error("Error: expected immediate operand");
    }

    std::string imm = operand->immediate()->getText();
    int Vimm = -1 ;
    
    if(!imm.empty() && imm[0] == '#')
    {
        Vimm = std::stoi(imm.substr(1));
    } 

    return std::make_unique<ImmediateOperand>(Vimm);
}


static std::variant<std::unique_ptr<RRegOperand>, std::unique_ptr<ImmediateOperand>> parseDval_Operand(VMGrammarParser::OperandContext *operand, VMState *vs) {
    if (operand->register_() && operand->register_()->RREGISTER()) 
    {
        return parseRm_Operand(operand, vs);
    } else if (operand->immediate()) 
    {
        return parseImm_Operand(operand, vs);
    } else {
        throw std::runtime_error("Error: unsupported operand type");
    }
}



void VMListener::enterInstruction(VMGrammarParser::InstructionContext *ctx) 
{
    std::cout << "Instruction : " << ctx->getText() << '\n';

    auto ops = ctx->operand();
    size_t numOperands = ctx->operand().size();
    size_t line = ctx->getStart()->getLine();
    std::unique_ptr<IInstruction> inst; 

    auto opcodeCtx = ctx->opcode();
    
    try {
        if (opcodeCtx->WSTR()) 
        {
            if (numOperands != 1) 
                throw std::runtime_error("Error: WSTR needs exactly one operand");
            
            inst = std::make_unique<WSTR>();
            
        }

        if (opcodeCtx->LOAD()) 
        {
            if (numOperands != 2) 
                throw std::runtime_error("Error: LOAD needs exactly 2 operands");
            
            inst = std::make_unique<LOAD>();
            createDval_RmInstruction(inst.get(),ops,line);

        }
        if (opcodeCtx->WINT()) 
        {

            if (numOperands != 0) 
                throw std::runtime_error("Error: WINT is an unary instruction");
            
            inst = std::make_unique<WINT>();
            
        }

        if(opcodeCtx->ADD())
        {
            inst = std::make_unique<ADD>();
            createDval_RmInstruction(inst.get(),ops,line);
        }

        if(opcodeCtx->SUB())
        {
            inst = std::make_unique<SUB>();
            createDval_RmInstruction(inst.get(),ops,line);
        }

        if(opcodeCtx->QUO())
        {
            inst = std::make_unique<QUO>();
            createDval_RmInstruction(inst.get(),ops,line);
        }
        
        if(opcodeCtx->OPP())
        {
            inst = std::make_unique<OPP>();
            createDval_RmInstruction(inst.get(),ops,line);
        }

        if(opcodeCtx->REM())
        {
            inst = std::make_unique<REM>();
            createDval_RmInstruction(inst.get(),ops,line);
        }

        if(opcodeCtx->MUL())
        {
            inst = std::make_unique<MUL>();
            createDval_RmInstruction(inst.get(),ops,line);
        }
    } 
    catch (const std::runtime_error &e) {
        std::cerr << "Semantic Error on line " 
                  << ctx->getStart()->getLine() 
                  << ": " << e.what() << std::endl;
    }
    
    TmpInst.push_back(std::move(inst));
}

void VMListener::enterOpcode(VMGrammarParser::OpcodeContext * ctx)
{
    std::cout << "Opcode :  " << ctx->getText() << '\n';
    
}


void VMListener::enterString_literal(VMGrammarParser::String_literalContext * ctx)
{

    std::cout << "enterString_literal : " << ctx->getText() << '\n';
    if(ctx->STRING_LITERAL())
    {
        IInstruction* lastInstruction = TmpInst.back().get();
        lastInstruction->addOperand( 
            std::make_unique<StringLiteralOperand>(ctx->getText())
        );
    }
}


void VMListener::enterLabel_definition(VMGrammarParser::Label_definitionContext * ctx)
{
    std::cout << "enterLabel_definition : " << ctx->getText() << '\n';
}

void VMListener::finalizeProgram() 
{
    ProgATS->setInstructions(std::move(TmpInst));
}

void VMListener::enterOperand(VMGrammarParser::OperandContext * ctx)
{
    // std::cout << "Operand :  " << ctx->getText() << '\n';
    // std::cout << "Operand :  " << ctx->getText() << '\n';
    // IInstruction* lastInstruction = TmpInst.back().get();

    //  if (auto loadInst = dynamic_cast<LOAD*>(lastInstruction)) 
    //  {
    //    
    //  } 
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



// OPCODE dval, Rm

void VMListener::createDval_RmInstruction(IInstruction * inst ,const std::vector<VMGrammarParser::OperandContext *> &operands, size_t line) 
{
    if (operands.size() != 2) {
        throw std::runtime_error("Error: ADD requires exactly 2 operands");
    }
    
    auto operand1 = parseDval_Operand(operands[0], vms);
    

    std::visit([&inst](auto &&op) {
        inst->addOperand(std::move(op));
    }, operand1);

    inst->addOperand(parseRm_Operand(operands[1],vms));
}







