#ifndef RFLOAT_HPP
#define RFLOAT_HPP

#include "IInstruction.hpp"




class RFLOAT  : public  IInstruction
{
    public :

        ~RFLOAT() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif