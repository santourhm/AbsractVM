#include "IInstruction.hpp"
#include "DIV.hpp"
#include "RRegOperand.hpp"
#include <iostream>
#include "Op_Results.hpp"


void DIV::execute(VMState * vms) 
{
    try
    {
        if (operands.size() < 2) {
            throw std::runtime_error(" : DIV requires 2 operands but got " + std::to_string(operands.size()));
            return;
        }

        auto& src = operands[0];
        auto& dst = operands[1];

        Value srcValue = src.get()->read();
        Value dstValue = dst.get()->read();

        if(srcValue.getType() == TypeTag::ADDRESS  ||  dstValue.getType() != TypeTag::ADDRESS )
        {
            throw std::runtime_error("DIV given arg type are not compatible");
            return;
        }

        Op_Results results = dstValue/srcValue ;

        dst.get()->write(results.val);

        vms->set_sCC(results.cc);

    }
    catch(const std::runtime_error& e)
    {
        std::cerr << "Error :" << e.what() << '\n';
    }
}

void DIV::debug(VMState * vms) 
{
    std::cout << "DIV" << std::endl;
}
