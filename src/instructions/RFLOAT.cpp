#include "RFLOAT.hpp"
#include <iostream>
#include <stdexcept>
#include "machine/EnvRegisters.hpp"
#include "Value.hpp"

void RFLOAT::execute(VMState * vms)
{
    EnvRegisters * envReg = vms->getEnv_Registers();
    Register * R1 = envReg->getR(1);
    
    float input;
    if (!(std::cin >> input)) {
        throw std::runtime_error(": RFLOAT expected a float, input invalid");
    }

    R1->write(Value(input));
}


void RFLOAT::debug(VMState * vms) 
{
    std::cout << "RFLOAT" << std::endl;
}
