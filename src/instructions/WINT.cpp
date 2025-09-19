#include "WINT.hpp"
#include <iostream>
#include "machine/EnvRegisters.hpp"
#include <stdexcept>


void WINT::execute(VMState * vms)
{
      EnvRegisters  * envReg = vms->getEnv_Registers();
      Register     * R1 = envReg->getR(1);
      Value v  =  R1->read();
      if(v.getType() != TypeTag::INTEGER)
      {
            throw std::runtime_error(": WINT print for integers only, R1 is " + v.get_str_type() + " type" );
            return;
      }
      std::cout << v.getInt() ; 
}

void WINT::debug(VMState * vms) 
{
    std::cout << "WINT" << std::endl;
}
