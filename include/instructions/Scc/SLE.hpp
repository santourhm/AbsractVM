#ifndef SLE_HPP
#define SLE_HPP

#include "IInstruction.hpp"




class SLE  : public  IInstruction
{
    public :

        ~SLE() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif