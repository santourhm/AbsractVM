#ifndef RTS_HPP
#define RTS_HPP

#include "IInstruction.hpp"




class RTS  : public  IInstruction
{
    public :

        ~RTS() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif