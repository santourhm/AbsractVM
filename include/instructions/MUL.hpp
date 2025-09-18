#ifndef MUL_HPP
#define MUL_HPP

#include "IInstruction.hpp"




class MUL  : public  IInstruction
{
    public :

        ~MUL() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif