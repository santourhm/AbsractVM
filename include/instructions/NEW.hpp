#ifndef NEW_HPP
#define NEW_HPP

#include "IInstruction.hpp"




class NEW  : public  IInstruction
{
    public :

        ~NEW() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif