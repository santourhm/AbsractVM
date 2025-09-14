#ifndef SOV_HPP
#define SOV_HPP

#include "IInstruction.hpp"




class SOV  : public  IInstruction
{
    public :

        ~SOV() = default ;
        void execute(VMState * vms) override;
};


#endif