#include "ERROR.hpp"
#include <stdexcept>
#include "machine/VMState.hpp"
#include <iostream>

void ERROR::execute(VMState * vms)
{
    vms->not_halt = false; 
    throw std::runtime_error(": Execution stopped with ERROR");
}


void ERROR::debug(VMState * vms)
{
    std::cout << "ERROR  " ;

    size_t numberOf_Operands = operands.size();

    for (size_t a = 0; a < numberOf_Operands ; a++ )
    {
        if(a >= 1)  std::cout << " , ";
        std::cout << operands[a].get()->show();
    }

    std::cout << std::endl;
}
