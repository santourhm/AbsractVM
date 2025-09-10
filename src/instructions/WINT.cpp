#include "WINT.hpp"
#include <iostream>





void WINT::execute(VMState * vms)
{
      EnvRegisters  * envReg = vms->getEnv_Registers();
      RRegister     * R1 = envReg->getR(1);

      std::cout << "WINT = " << std::get<int>(R1->RegisterGetValue()) << '\n'; 
}