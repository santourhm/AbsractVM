#include "Label.hpp"
#include <iostream>

void Label::execute([[maybe_unused]] VMState * vms)
{
        
}

void Label::debug(VMState * vms) 
{
    std::cout << "Label" << std::endl;
}
