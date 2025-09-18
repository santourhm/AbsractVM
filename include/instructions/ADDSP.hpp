#ifndef ADDSP_HPP
#define ADDSP_HPP

#include "IInstruction.hpp"




class ADDSP  : public  IInstruction
{
    public :

        ~ADDSP() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif