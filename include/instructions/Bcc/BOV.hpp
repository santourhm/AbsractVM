#ifndef BOV_HPP
#define BOV_HPP

#include "IInstruction.hpp"




class BOV  : public  IInstruction
{
    public :

        ~BOV() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif