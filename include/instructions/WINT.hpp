#ifndef WINT_HPP
#define WINT_HPP

#include "IInstruction.hpp"
#include "VMState.hpp"




class WINT : public IInstruction 
{
    public:

        WINT() = default;
        void execute(VMState * vms) override ;
};



#endif