#ifndef SHR_HPP
#define SHR_HPP

#include "IInstruction.hpp"




class SHR  : public  IInstruction
{
    public :

        ~SHR() = default ;
        void execute(VMState * vms) override;
};


#endif