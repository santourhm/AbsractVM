#ifndef     VMSTATE_HPP
#define     VMSTATE_HPP




#include "EnvRegisters.hpp"
#include "Register.hpp"
#include "includes.hpp"

class VMState
{
    std::unique_ptr<EnvRegisters> Env_Registers ;

    public:
        
        VMState() ;
        ~VMState() = default;

        EnvRegisters * getEnv_Registers() ;

};




#endif