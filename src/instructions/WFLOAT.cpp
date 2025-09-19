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
    std::cout << "WFLOAT " ;

    size_t numberOf_Operands = operands.size();

    for (size_t a = 0; a < numberOf_Operands ; a++ )
    {
        if(a >= 1)  std::cout << " , ";
        std::cout << operands[a].get()->show();
    }

    std::cout << std::endl;
}
