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
            return;
        }

        auto& src = operands[0];
        auto& dst = operands[1];

        Value srcValue = src.get()->read();
        Value dstValue = dst.get()->read();

        dst.get()->write(srcValue);

    }
    catch(const std::runtime_error& e)
    {
        std::cerr << "Error" << e.what() << '\n';
    }
    

}