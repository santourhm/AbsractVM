#ifndef SUB_HPP
#define SUB_HPP

#include "IInstruction.hpp"




class SUB  : public  IInstruction
{
    public :

        ~SUB() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif