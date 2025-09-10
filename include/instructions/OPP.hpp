#ifndef OPP_HPP
#define OPP_HPP

#include "IInstruction.hpp"




class OPP  : public  IInstruction
{
    public :

        ~OPP() = default ;
        void execute(VMState * vms) override;
};


#endif