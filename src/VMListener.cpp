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
#include "BRA.hpp"
#include "HALT.hpp"
#include "WFLOAT.hpp"
#include <memory>
#include "StringLiteralOperand.hpp"
#include "LabelOperand.hpp"
#include "VMGrammarParser.h"
#include "Register.hpp"
#include "ImmediateOperand.hpp"
#include "RRegOperand.hpp"
#include "Value.hpp"
#include "machine/EnvRegisters.hpp"
#include "Label.hpp"

VMListener::VMListener(VMState * vms)  : ProgATS(std::make_unique<Program>()), vms(vms), nb_intsructions(0) {}

std::unique_ptr<RRegOperand> static parseRm_Operand(VMGrammarParser::OperandContext *operand, VMState * vs) {
    if (!operand->register_()) {
        throw std::runtime_error(" : expected RREGISTER operand");
    }

    std::string regText = operand->register_()->RREGISTER()->getText();
    int regIndex = -1;
    if (!regText.empty() && regText[0] == 'R') {
        try {
            regIndex = std::stoi(regText.substr(1));
        } catch (const std::exception &) {
            throw std::runtime_error(" : invalid register number in " + regText);
        }
    } else {
        throw std::runtime_error(" : invalid register format in " + regText);
    }

    RRegister *reg = vs->getEnv_Registers()->getR(regIndex);
    return std::make_unique<RRegOperand>(reg);
}

std::unique_ptr<ImmediateOperand> static parseImm_Operand(VMGrammarParser::OperandContext *operand, VMState * vs) {
    if (!operand->immediate()) {
        throw std::runtime_error(" : expected immediate operand");
    }

    std::string imm = operand->immediate()->getText();
    Value v ;

    if(!imm.empty() && imm[0] == '#')
    {
        if(operand->immediate()->FLOAT())
        {
            float f =  std::stof(imm.substr(1));
            v = Value(f);
        }
        else if (operand->immediate()->INT())
        {
            int32_t i = std::stoi(imm.substr(1));
            v = Value(i);
        }
        else
        {
            throw std::runtime_error("Undefined type immediate type");
        }
    } 

    return std::make_unique<ImmediateOperand>(v);
}


static std::variant<std::unique_ptr<RRegOperand>, std::unique_ptr<ImmediateOperand>> parseDval_Operand(VMGrammarParser::OperandContext *operand, VMState *vs) {
    if (operand->register_() && operand->register_()->RREGISTER()) 
    {
        return parseRm_Operand(operand, vs);
    } else if (operand->immediate()) 
    {
        return parseImm_Operand(operand, vs);
    } else {
        throw std::runtime_error(" : unsupported operand type");
    }
}


std::unique_ptr<LabelOperand> static parseLabel_Operand(VMGrammarParser::OperandContext *operand) {
    if (!operand->label() && ! !operand->label()->ID()) {
        throw std::runtime_error(" : expected Label operand");
    }

    std::string label = operand->label()->ID()->getText();
    
    Value  v(label);

    return std::make_unique<LabelOperand>(v);
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
                throw std::runtime_error(" : WSTR needs exactly one operand");
            
            inst = std::make_unique<WSTR>();
            
        }
        else if (opcodeCtx->LOAD()) 
        {
            if (numOperands != 2) 
                throw std::runtime_error(" : LOAD needs exactly 2 operands");
            
            inst = std::make_unique<LOAD>();
            createDval_RmInstruction(inst.get(),ops,line);

        }
        else if (opcodeCtx->WINT()) 
        {
            if (numOperands != 0) 
                throw std::runtime_error(" : WINT does not support operands");
            inst = std::make_unique<WINT>();
            
        }
        else if (opcodeCtx->WFLOAT()) 
        {
            if (numOperands != 0) 
                throw std::runtime_error(" : WINT does not support operands");
            inst = std::make_unique<WFLOAT>();
            
        }
        else if(opcodeCtx->ADD())
        {
            if (numOperands != 2) 
                throw std::runtime_error(" : ADD needs exactly 2 operands");
            inst = std::make_unique<ADD>();
            createDval_RmInstruction(inst.get(),ops,line);
        }
        else if(opcodeCtx->SUB())
        {
            if (numOperands != 2) 
                throw std::runtime_error(" : SUB needs exactly 2 operands");
            inst = std::make_unique<SUB>();
            createDval_RmInstruction(inst.get(),ops,line);
        }
        else if(opcodeCtx->QUO())
        {
            if (numOperands != 2) 
                throw std::runtime_error(" : QUO needs exactly 2 operands");
            inst = std::make_unique<QUO>();
            createDval_RmInstruction(inst.get(),ops,line);
        }
        else if(opcodeCtx->OPP())
        {
            if (numOperands != 2) 
                throw std::runtime_error(" : OPP needs exactly 2 operands");
            inst = std::make_unique<OPP>();
            createDval_RmInstruction(inst.get(),ops,line);
        }
        else if(opcodeCtx->REM())
        {
            if (numOperands != 2) 
                throw std::runtime_error(" : REM needs exactly 2 operands");
            inst = std::make_unique<REM>();
            createDval_RmInstruction(inst.get(),ops,line);
        }
        else if(opcodeCtx->MUL())
        {
            if (numOperands != 2) 
                throw std::runtime_error(" : MUL needs exactly 2 operands");
            inst = std::make_unique<MUL>();
            createDval_RmInstruction(inst.get(),ops,line);
        }
        else if(opcodeCtx->HALT())
        {
            if (numOperands != 0) 
                throw std::runtime_error(" : HALT works without operands");
            inst = std::make_unique<HALT>();
        }
        else if(opcodeCtx->BRA())
        {
            if (numOperands != 1) 
                throw std::runtime_error(" : BRA needs exactly 1 label operand");

            inst = std::make_unique<BRA>();
            inst->addOperand(parseLabel_Operand(ops[0]));
        }
    } 
    catch (const std::runtime_error &e) {
        std::cerr << "Semantic Error on line " 
                  << ctx->getStart()->getLine() 
                  << ": " << e.what() << std::endl;
    }
    
    TmpInst.push_back(std::move(inst));
    nb_intsructions++;
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

    
    std::unique_ptr<IInstruction> inst; 
    
    std::string label = ctx->getText();

    if (!label.empty() && label.back() == ':') {
        label = label.substr(0, label.size() - 1);  
    }
    else{
        throw std::runtime_error(" : unsupported label definition"); 
    }
    
    std::cout << "enterLabel_definition : " << label << '\n';
    
    uint32_t address = static_cast<uint32_t>(nb_intsructions);
    
    Value v(address);
                                                                                 
    vms->getSymbol_Table()[label] = v;

    inst = std::make_unique<Label>();

    inst->addOperand(std::make_unique<LabelOperand>(v));

    TmpInst.push_back(std::move(inst));
 
    nb_intsructions++;
}

void VMListener::finalizeProgram() 
{
    ProgATS->setInstructions(std::move(TmpInst));
}

void VMListener::enterOperand(VMGrammarParser::OperandContext * ctx)
{

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
        throw std::runtime_error(" : Instruction requires exactly 2 operands");
    }
    
    auto operand1 = parseDval_Operand(operands[0], vms);
    

    std::visit([&inst](auto &&op) {
        inst->addOperand(std::move(op));
    }, operand1);

    inst->addOperand(parseRm_Operand(operands[1],vms));
}







