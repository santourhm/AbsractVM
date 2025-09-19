#include "Label.hpp"
#include <iostream>

void Label::execute([[maybe_unused]] VMState * vms)
{
        
}

void Label::debug(VMState * vms)
{
    std::cout << "Label  " ;

    size_t numberOf_Operands = operands.size();

    for (size_t a = 0; a < numberOf_Operands ; a++ )
    {
        if(a >= 1)  std::cout << " , ";
        std::cout << operands[a].get()->show();
    }

    std::cout << std::endl;
}

