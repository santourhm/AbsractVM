#include "machine/VMState.hpp"

#include "machine/EnvRegisters.hpp"


VMState::VMState() 
{
    Env_Registers = std::make_unique<EnvRegisters>();
} 


EnvRegisters * VMState::getEnv_Registers()
{
    return Env_Registers.get();
}

VMState::~VMState() = default;