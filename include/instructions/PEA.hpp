#ifndef PEA_HPP
#define PEA_HPP

#include "IInstruction.hpp"




class PEA  : public  IInstruction
{
    public :

        ~PEA() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif