#ifndef SUBSP_HPP
#define SUBSP_HPP

#include "IInstruction.hpp"




class SUBSP  : public  IInstruction
{
    public :

        ~SUBSP() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif