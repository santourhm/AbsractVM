#include "IInstruction.hpp"
#include "CMP.hpp"
#include "RRegOperand.hpp"
#include <iostream>
#include "Op_Results.hpp"
#include <iostream>


void CMP::execute(VMState * vms) 
{
    try
    {
        if (operands.size() < 2) {
            throw std::runtime_error(" : CMP requires 2 operands but got " + std::to_string(operands.size()));
            return;
        }

        auto& src = operands[0];
        auto& dst = operands[1];

        Value srcValue = src.get()->read();
        Value dstValue = dst.get()->read();

        Op_Results results = dstValue - srcValue  ;

        vms->set_sCC(results.cc);

    }
    catch(const std::runtime_error& e)
    {
        std::cerr << "Error" << e.what() << '\n';
    }
}

void CMP::debug(VMState * vms)
{
    std::cout << "CMP    " ;

    size_t numberOf_Operands = operands.size();

    for (size_t a = 0; a < numberOf_Operands ; a++ )
    {
        if(a >= 1)  std::cout << " , ";
        std::cout << operands[a].get()->show();
    }

    std::cout << std::endl;
}



