#ifndef STORE_HPP
#define STORE_HPP

#include "IInstruction.hpp"




class STORE  : public  IInstruction
{
    public :

        ~STORE() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif