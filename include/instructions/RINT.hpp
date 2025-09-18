#ifndef RINT_HPP
#define RINT_HPP

#include "IInstruction.hpp"




class RINT  : public  IInstruction
{
    public :

        ~RINT() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif