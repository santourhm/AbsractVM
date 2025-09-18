#ifndef SLT_HPP
#define SLT_HPP

#include "IInstruction.hpp"




class SLT  : public  IInstruction
{
    public :

        ~SLT() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif