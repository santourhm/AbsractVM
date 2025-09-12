#ifndef     VMSTATE_HPP
#define     VMSTATE_HPP



#include <memory>

//#include "EnvRegisters.hpp"

class EnvRegisters;

class VMState
{
    std::unique_ptr<EnvRegisters> Env_Registers ;

    public:
        
        VMState() ;
        ~VMState() ;

        EnvRegisters * getEnv_Registers() ;

};




#endif