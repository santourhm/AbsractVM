#include "IInstruction.hpp"
#include "QUO.hpp"
#include "RRegOperand.hpp"
#include <iostream>



void QUO::execute(VMState * vms) 
{
        if (operands.size() < 2) {
            throw std::runtime_error(" : QUO requires 2 operands but got " + std::to_string(operands.size()));
        }

        auto& src = operands[0];
        auto& dst = operands[1];

        RRegOperand * dstRegOperand = dynamic_cast<RRegOperand*>(dst.get()); 

        RRegister   * DstReg        =  static_cast<RRegister*>(dstRegOperand->getRegister());

        VOp_t Vsrc = src.get()->getOperandValue(); 
        VOp_t Vdst = dst.get()->getOperandValue(); 

        if (std::get<int>(Vsrc) == 0 )
        {
            throw std::runtime_error(" : DIVISION BY ZERO ! ");
        }
        

        DstReg->RegisterSetValue(std::get<int>(Vdst) / std::get<int>(Vsrc));
}