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
    std::cout << "ERROR" << std::endl;
}
