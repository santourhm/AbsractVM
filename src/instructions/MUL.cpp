#include "IInstruction.hpp"
#include "MUL.hpp"
#include "RRegOperand.hpp"
#include <iostream>



void MUL::execute(VMState * vms) 
{
        if (operands.size() < 2) {
            throw std::runtime_error(" : MUL requires 2 operands but got " + std::to_string(operands.size()));
        }

        auto& src = operands[0];
        auto& dst = operands[1];

        RRegOperand * dstRegOperand = dynamic_cast<RRegOperand*>(dst.get()); 

        RRegister   * DstReg        =  static_cast<RRegister*>(dstRegOperand->getRegister());

        VOp_t Vsrc = src.get()->getOperandValue(); 
        VOp_t Vdst = dst.get()->getOperandValue(); 

        DstReg->RegisterSetValue(std::get<int>(Vsrc)*std::get<int>(Vdst));
}