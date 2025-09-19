#include "RINT.hpp"
#include <iostream>
#include <stdexcept>
#include "machine/EnvRegisters.hpp"
#include "Value.hpp"

void RINT::execute(VMState * vms)
{
    EnvRegisters * envReg = vms->getEnv_Registers();
    Register * R1 = envReg->getR(1);

    int input;
    if (!(std::cin >> input)) {
        throw std::runtime_error(": RINT expected an integer, input invalid");
    }

    R1->write(Value(input));

}


void RINT::debug(VMState * vms) 
{
    std::cout << "RINT" << std::endl;
}
