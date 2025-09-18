#ifndef WNL_HPP
#define WNL_HPP

#include "IInstruction.hpp"
#include "VMState.hpp"




class WNL : public IInstruction 
{
    public:

        WNL() = default;
        void execute(VMState * vms) override ;
        void debug(VMState * vms) override;
};



#endif