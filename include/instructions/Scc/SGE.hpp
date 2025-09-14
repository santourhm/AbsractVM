#ifndef SGE_HPP
#define SGE_HPP

#include "IInstruction.hpp"




class SGE  : public  IInstruction
{
    public :

        ~SGE() = default ;
        void execute(VMState * vms) override;
};


#endif