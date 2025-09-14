#ifndef SHL_HPP
#define SHL_HPP

#include "IInstruction.hpp"




class SHL  : public  IInstruction
{
    public :

        ~SHL() = default ;
        void execute(VMState * vms) override;
};


#endif