#include "IInstruction.hpp"
#include "HALT.hpp"
#include <iostream>


void HALT::execute(VMState * vms) 
{
    vms->not_halt = false;
}

void HALT::debug(VMState * vms)
{
    std::cout << "HALT   " ;

    size_t numberOf_Operands = operands.size();

    for (size_t a = 0; a < numberOf_Operands ; a++ )
    {
        if(a >= 1)  std::cout << " , ";
        std::cout << operands[a].get()->show();
    }

    std::cout << std::endl;
}


