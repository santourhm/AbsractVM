#ifndef SNE_HPP
#define SNE_HPP

#include "IInstruction.hpp"




class SNE  : public  IInstruction
{
    public :

        ~SNE() = default ;
        void execute(VMState * vms) override;
};


#endif