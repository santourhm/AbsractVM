#include "WADDR.hpp"
#include "machine/Memory.hpp"
#include "machine/EnvRegisters.hpp"
#include <stdexcept>
#include <iostream>
#include <iomanip> 

#include "Op_Results.hpp"

void WADDR::execute(VMState * vms)
{
    if (operands.size() != 1) 
    {
        throw std::runtime_error(" : WADDR requires 1 register operand but got " 
                                 + std::to_string(operands.size()));
        return;
    }

    auto& src = operands[0];
    Value srcValue = src.get()->read();
    
    if (srcValue.getType() == TypeTag::INTEGER)
    {
        std::cout << srcValue.get_str_type() << " : ";
        std::cout << "0x" 
                  << std::uppercase << std::hex << static_cast<uint32_t>(srcValue.getInt()) 
                  << std::dec << std::endl;  // switch back to decimal
    }
    else if (srcValue.getType() == TypeTag::ADDRESS)
    {
        std::cout << srcValue.get_str_type() << " : ";
        std::cout << "0x" 
                  << std::uppercase << std::hex << static_cast<uint32_t>(srcValue.getAddr()) 
                  << std::dec << std::endl;
    }
    else if (srcValue.getType() == TypeTag::NULL_ADDR)
    {
        std::cout << srcValue.get_str_type() << " : ";
        std::cout << "unsupported type" << std::endl;
    }
}


void WADDR::debug(VMState * vms) 
{
    std::cout << "WADDR" << std::endl;
}
