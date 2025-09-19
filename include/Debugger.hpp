#ifndef DEBUGGER_HPP
#define DEBUGGER_HPP

#include <vector>
#include "VMState.hpp"
#include "Program.hpp"
#include "Register.hpp"



class Debugger
{
        size_t size;
        const std::vector<std::unique_ptr<IInstruction>>& instructions;  
        std::vector<bool> bkpt;
        std::unordered_map<std::string, Register*> pointer_OnReg;
        Register * ptrReg;
        
    public:

        Debugger(VMState * vms,const std::vector<std::unique_ptr<IInstruction>>& inst);
        ~Debugger() = default;


        void  execute(VMState * vms);
        void  execute_OneInstruction(VMState * vms);

        void setBreakpoint(uint32_t  bkpt);
        void setReg_Pointer(std::string str_addr);
        Value read_Pointer() const;
        void write_Pointer(uint32_t value);
};



                                                                          

#endif
