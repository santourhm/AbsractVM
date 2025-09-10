#include "IInstruction.hpp"
#include "OPP.hpp"
#include "RRegOperand.hpp"
#include <iostream>



void OPP::execute(VMState * vms) 
{
        if (operands.size() < 2) {
            throw std::runtime_error(" : OPP requires 2 operands but got " + std::to_string(operands.size()));
        }

        auto& src = operands[0];
        auto& dst = operands[1];

        RRegOperand * dstRegOperand = dynamic_cast<RRegOperand*>(dst.get()); 

        RRegister   * DstReg        =  static_cast<RRegister*>(dstRegOperand->getRegister());

        VOp_t Vsrc = src.get()->getOperandValue(); 

        DstReg->RegisterSetValue(-std::get<int>(Vsrc));
}