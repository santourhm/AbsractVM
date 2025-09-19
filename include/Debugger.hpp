#ifndef DEBUGGER_HPP
#define DEBUGGER_HPP

#include <vector>
#include "VMState.hpp"
#include "Program.hpp"




class Debugger
{
        size_t size;
        const std::vector<std::unique_ptr<IInstruction>>& instructions;  
        std::vector<bool> bkpt;

    public:

        Debugger(const std::vector<std::unique_ptr<IInstruction>>& inst)
        : size(inst.size()), instructions(inst), bkpt(size, false) {}
        ~Debugger() = default;


        void  execute(VMState * vms);
        void  execute_OneInstruction(VMState * vms);

        void setBreakpoint(uint32_t  bkpt);
};



                                                                          

#endif
