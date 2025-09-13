#include "WFLOAT.hpp"
#include <iostream>
#include "machine/EnvRegisters.hpp"
#include "RRegister.hpp"
#include <stdexcept>


void WFLOAT::execute(VMState * vms)
{
      EnvRegisters  * envReg = vms->getEnv_Registers();
      RRegister     * R1 = envReg->getR(1);
      Value v       =  R1->RegisterGetValue();
      if(v.getType() != TypeTag::FLOAT)
      {
            throw std::runtime_error(": WFLOAT print for floats only");
            return;
      }
      std::cout << v.getFloat() ; 
}