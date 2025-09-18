#ifndef BSR_HPP
#define BSR_HPP

#include "IInstruction.hpp"




class BSR  : public  IInstruction
{
    public :

        ~BSR() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif