#include "WNL.hpp"
#include <iostream>
#include "machine/EnvRegisters.hpp"
#include "RRegister.hpp"
#include <stdexcept>


void WNL::execute(VMState * vms)
{
      std::cout << "\n" ; 
}

void WNL::debug(VMState * vms) 
{
    std::cout << "WNL" << std::endl;
}
