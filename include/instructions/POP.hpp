#ifndef POP_HPP
#define POP_HPP

#include "IInstruction.hpp"




class POP  : public  IInstruction
{
    public :

        ~POP() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif