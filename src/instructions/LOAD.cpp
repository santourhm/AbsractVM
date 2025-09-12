#include "LOAD.hpp"
#include "ImmediateOperand.hpp"
#include "RRegOperand.hpp"
#include <iostream>
#include "Value.hpp"



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

        Value srcValue = src.get()->read(*vms);
        Value dstValue = dst.get()->read(*vms);

        dst.get()->write(*vms,srcValue);

    }
    catch(const std::runtime_error& e)
    {
        std::cerr << "Error" << e.what() << '\n';
    }
    

}