#ifndef ERROR_HPP
#define ERROR_HPP

#include "IInstruction.hpp"




class ERROR  : public  IInstruction
{
    public :

        ~ERROR() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif