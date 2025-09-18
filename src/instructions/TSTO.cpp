#include "TSTO.hpp"
#include "machine/Memory.hpp"
#include "machine/EnvRegisters.hpp"
#include <stdexcept>
#include <iostream>

#include "Op_Results.hpp"

void TSTO::execute(VMState * vms)
{
    if (operands.size() != 1) 
    {
        throw std::runtime_error(" : SUBSP requires 1 immediate operand but got " + std::to_string(operands.size()));
        return;
    }

    auto& src = operands[0];

    Value srcValue = src.get()->read();
    
    if(srcValue.getType() != TypeTag::INTEGER)
    {
        throw std::runtime_error(" SUBSP : you cannot pass a float type");
        return;
    }
    Memory * mem = vms->getMemory();

    uint32_t SP = mem->getSP();
    uint32_t GB = vms->getEnv_Registers()->getGB()->RegisterGetValue().getAddr();
    
    if (SP + srcValue.getInt() > mem->STACK_SIZE_WORDS) 
    {
        vms->get_sCC()->OV = 1;
        
    } else 
    {
        vms->get_sCC()->OV = 0;
    }
}


void TSTO::debug(VMState * vms) 
{
    std::cout << "TSTO" << std::endl;
}
