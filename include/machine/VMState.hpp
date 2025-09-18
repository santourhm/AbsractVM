#ifndef     VMSTATE_HPP
#define     VMSTATE_HPP



#include <memory>
#include <unordered_map>
#include "Value.hpp"
#include "Op_Results.hpp"

class EnvRegisters;

class Memory;

class VMState
{
    std::unique_ptr<CC>  s_CC;
    std::unique_ptr<EnvRegisters> Env_Registers ;
    std::unique_ptr<Memory> memr ;
    std::unordered_map<std::string, Value> symbolTable;


    public:
                
        VMState() ;
        ~VMState() ;

        bool  not_halt ;
        EnvRegisters * getEnv_Registers() ;
        Memory *    getMemory();
        std::unordered_map<std::string, Value>& getSymbol_Table() ;
        
        CC * get_sCC();
        void set_sCC(const CC& CC_state);

};




#endif