#ifndef BEQ_HPP
#define BEQ_HPP

#include "IInstruction.hpp"




class BEQ  : public  IInstruction
{
    public :

        ~BEQ() = default ;
        void execute(VMState * vms) override;
};


#endif