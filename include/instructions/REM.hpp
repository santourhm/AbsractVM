#ifndef REM_HPP
#define REM_HPP

#include "IInstruction.hpp"




class REM  : public  IInstruction
{
    public :

        ~REM() = default ;
        void execute(VMState * vms) override;
};


#endif