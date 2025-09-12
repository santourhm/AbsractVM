#ifndef WFLOAT_HPP
#define WFLOAT_HPP

#include "IInstruction.hpp"
#include "VMState.hpp"




class WFLOAT : public IInstruction 
{
    public:

        WFLOAT() = default;
        void execute(VMState * vms) override ;
};



#endif