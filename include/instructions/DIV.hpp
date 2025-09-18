#ifndef DIV_HPP
#define DIV_HPP

#include "IInstruction.hpp"




class DIV  : public  IInstruction
{
    public :

        ~DIV() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif