#ifndef PUSH_HPP
#define PUSH_HPP

#include "IInstruction.hpp"




class PUSH  : public  IInstruction
{
    public :

        ~PUSH() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif