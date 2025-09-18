#ifndef BLT_HPP
#define BLT_HPP

#include "IInstruction.hpp"




class BLT  : public  IInstruction
{
    public :

        ~BLT() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif