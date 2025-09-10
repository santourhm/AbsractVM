#ifndef ADD_HPP
#define ADD_HPP

#include "IInstruction.hpp"




class ADD  : public  IInstruction
{
    public :

        ~ADD() = default ;
        void execute(VMState * vms) override;
};


#endif