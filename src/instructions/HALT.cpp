#include "IInstruction.hpp"
#include "HALT.hpp"
#include <iostream>


void HALT::execute(VMState * vms) 
{
    vms->not_halt = false;
}

void HALT::debug(VMState * vms) 
{
    std::cout << "HALT" << std::endl;
}
