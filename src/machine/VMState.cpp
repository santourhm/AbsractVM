#include "machine/VMState.hpp"

#include "machine/EnvRegisters.hpp"

#include "Memory.hpp"

VMState::VMState() 
{
    Env_Registers = std::make_unique<EnvRegisters>();
    s_CC = std::make_unique<CC>();
    memr = std::make_unique<Memory>(Env_Registers.get()); 
    not_halt      = true;

} 


EnvRegisters * VMState::getEnv_Registers()
{
    return Env_Registers.get();
}

std::unordered_map<std::string, Value>& VMState::getSymbol_Table() {
    return symbolTable;
}

CC * VMState::get_sCC()
{
    return s_CC.get();
}

Memory * VMState::getMemory()
{
    return memr.get();
}


void VMState::set_sCC(const CC& CC_state)
{
    *s_CC.get() = CC_state;
}


VMState::~VMState() = default;