#include "WFLOAT.hpp"
#include <iostream>
#include "machine/EnvRegisters.hpp"
#include <stdexcept>


void WFLOAT::execute(VMState * vms)
{
      EnvRegisters  * envReg = vms->getEnv_Registers();
      Register     * R1 = envReg->getR(1);
      Value v       =  R1->read();
      if(v.getType() != TypeTag::FLOAT)
      {
            throw std::runtime_error(": WFLOAT print for floats only");
            return;
      }
      std::cout << v.getFloat() ; 
}

void WFLOAT::debug(VMState * vms) 
{
    std::cout << "WFLOAT" << std::endl;
}
