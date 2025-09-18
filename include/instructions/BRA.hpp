#ifndef BRA_HPP
#define BRA_HPP

#include "IInstruction.hpp"




class BRA  : public  IInstruction
{
    public :

        ~BRA() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif