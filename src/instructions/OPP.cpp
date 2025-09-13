#include "IInstruction.hpp"
#include "OPP.hpp"
#include "RRegOperand.hpp"
#include <iostream>
#include "Op_Results.hpp"


void OPP::execute(VMState * vms) 
{
    try
    {
        if (operands.size() < 2) {
            throw std::runtime_error(" : MUL requires 2 operands but got " + std::to_string(operands.size()));
            return;
        }

        auto& src = operands[0];
        auto& dst = operands[1];

        Value srcValue = src.get()->read();

        Op_Results results = srcValue*Value(-1) ;

        dst.get()->write(results.val);

    }
    catch(const std::runtime_error& e)
    {
        std::cerr << "Error" << e.what() << '\n';
    }
}