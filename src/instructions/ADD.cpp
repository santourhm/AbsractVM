#include "IInstruction.hpp"
#include "ADD.hpp"
#include "RRegOperand.hpp"
#include <iostream>
#include <stdexcept>

#include "Op_Results.hpp"

void ADD::execute(VMState * vms) 
{

    try
    {
        if (operands.size() < 2) {
            throw std::runtime_error(" : ADD requires 2 operands but got " + std::to_string(operands.size()));
        }

        auto& src = operands[0];
        auto& dst = operands[1];

        Value srcValue = src.get()->read(*vms);
        Value dstValue = dst.get()->read(*vms);

        Op_Results results = srcValue + dstValue ;

        dst.get()->write(*vms,results.val);

    }
    catch(const std::runtime_error& e)
    {
        std::cerr << "Error" << e.what() << '\n';
    }
    
    
}