#ifndef     VMSTATE_HPP
#define     VMSTATE_HPP



#include <memory>
#include <unordered_map>
#include "Value.hpp"
#include "Op_Results.hpp"

class EnvRegisters;

class VMState
{
    std::unique_ptr<CC>  s_CC;
    std::unique_ptr<EnvRegisters> Env_Registers ;
    std::unordered_map<std::string, Value> symbolTable;


    public:
                
        VMState() ;
        ~VMState() ;

        bool  not_halt ;
        EnvRegisters * getEnv_Registers() ;
        std::unordered_map<std::string, Value>& getSymbol_Table() ;
        
        CC * get_sCC();
        void set_sCC(const CC& CC_state);

};




#endif