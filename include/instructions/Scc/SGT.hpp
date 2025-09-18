#ifndef SGT_HPP
#define SGT_HPP

#include "IInstruction.hpp"




class SGT  : public  IInstruction
{
    public :

        ~SGT() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif