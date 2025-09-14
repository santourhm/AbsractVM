#ifndef SEQ_HPP
#define SEQ_HPP

#include "IInstruction.hpp"




class SEQ  : public  IInstruction
{
    public :

        ~SEQ() = default ;
        void execute(VMState * vms) override;
};


#endif