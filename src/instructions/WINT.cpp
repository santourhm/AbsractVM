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
    std::cout << "WINT   " ;

    size_t numberOf_Operands = operands.size();

    for (size_t a = 0; a < numberOf_Operands ; a++ )
    {
        if(a >= 1)  std::cout << " , ";
        std::cout << operands[a].get()->show();
    }

    std::cout << std::endl;
}


