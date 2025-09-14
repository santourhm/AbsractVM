#ifndef BNE_HPP
#define BNE_HPP

#include "IInstruction.hpp"




class BNE  : public  IInstruction
{
    public :

        ~BNE() = default ;
        void execute(VMState * vms) override;
};


#endif