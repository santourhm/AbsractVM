#ifndef WADDR_HPP
#define WADDR_HPP

#include "IInstruction.hpp"




class WADDR  : public  IInstruction
{
    public :

        ~WADDR() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif