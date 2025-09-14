#ifndef BGE_HPP
#define BGE_HPP

#include "IInstruction.hpp"




class BGE  : public  IInstruction
{
    public :

        ~BGE() = default ;
        void execute(VMState * vms) override;
};


#endif