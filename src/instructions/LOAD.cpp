#include "LOAD.hpp"
#include "ImmediateOperand.hpp"
#include "RRegOperand.hpp"
#include <iostream>



LOAD::LOAD(std::vector<std::unique_ptr<Operand>> ops)
{
    operands = std::move(ops);
}


void LOAD::execute(VMState * vms)
{
    
    (VMState*)vms;

    try
    {
        if (operands.size() < 2) {
            throw std::runtime_error(" : LOAD requires 2 operands but got " + std::to_string(operands.size()));
        }

        auto& src = operands[0];
        auto& dst = operands[1];

        RRegOperand * dstRegOperand = dynamic_cast<RRegOperand*>(dst.get()); 

        RRegister   * DstReg        =  static_cast<RRegister*>(dstRegOperand->getRegister());

        VOp_t Vsrc = src.get()->getOperandValue(); 

        DstReg->RegisterSetValue(Vsrc);

    }
    catch(const std::runtime_error& e)
    {
        std::cerr << "Error" << e.what() << '\n';
    }
    

}