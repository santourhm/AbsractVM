#include "WINT.hpp"
#include <iostream>
#include "machine/EnvRegisters.hpp"
#include "RRegister.hpp"
#include <stdexcept>


void WINT::execute(VMState * vms)
{
      EnvRegisters  * envReg = vms->getEnv_Registers();
      RRegister     * R1 = envReg->getR(1);
      Value v  =  R1->RegisterGetValue();
      if(v.getType() != TypeTag::INTEGER)
      {
            throw std::runtime_error(": WINT print for integers only");
            return;
      }
      std::cout << "WINT = " << v.getInt() << '\n'; 
}