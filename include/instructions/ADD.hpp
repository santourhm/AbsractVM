#ifndef ADD_HPP
#define ADD_HPP

#include "IInstruction.hpp"




class ADD  : public  IInstruction
{
    public :

        ~ADD() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif