#ifndef CMP_HPP
#define CMP_HPP

#include "IInstruction.hpp"




class CMP  : public  IInstruction
{
    public :

        ~CMP() = default ;
        void execute(VMState * vms) override;
};


#endif