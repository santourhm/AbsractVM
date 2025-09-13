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
        auto& src = operands[0];
        auto& dst = operands[1];

        Value srcValue = src.get()->read();
        Value dstValue = dst.get()->read();

        Op_Results results = srcValue + dstValue ;

        dst.get()->write(results.val);

    }
    catch(const std::runtime_error& e)
    {
        std::cerr << "Error" << e.what() << '\n';
    }
    
    
}