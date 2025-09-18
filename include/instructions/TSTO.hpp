#ifndef TSTO_HPP
#define TSTO_HPP

#include "IInstruction.hpp"




class TSTO  : public  IInstruction
{
    public :

        ~TSTO() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif