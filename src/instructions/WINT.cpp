#include "WINT.hpp"
#include <iostream>





void WINT::execute(VMState * vms)
{
      EnvRegisters  * envReg = vms->getEnv_Registers();
      RRegister     * R0 = envReg->getR(0);

      std::cout << "WINT = " << std::get<int>(R0->RegisterGetValue()) << '\n'; 
}