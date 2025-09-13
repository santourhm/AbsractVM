#include "machine/VMState.hpp"

#include "machine/EnvRegisters.hpp"


VMState::VMState() 
{
    Env_Registers = std::make_unique<EnvRegisters>();
    not_halt      = true;
} 


EnvRegisters * VMState::getEnv_Registers()
{
    return Env_Registers.get();
}

std::unordered_map<std::string, Value>& VMState::getSymbol_Table() {
    return symbolTable;
}


VMState::~VMState() = default;