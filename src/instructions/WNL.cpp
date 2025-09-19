#include "WNL.hpp"
#include <iostream>


void WNL::execute(VMState * vms)
{
      std::cout << "\n" ; 
}

void WNL::debug(VMState * vms)
{
    std::cout << "WNL    " ;

    size_t numberOf_Operands = operands.size();

    for (size_t a = 0; a < numberOf_Operands ; a++ )
    {
        if(a >= 1)  std::cout << " , ";
        std::cout << operands[a].get()->show();
    }

    std::cout << std::endl;
}
