#ifndef BGT_HPP
#define BGT_HPP

#include "IInstruction.hpp"




class BGT  : public  IInstruction
{
    public :

        ~BGT() = default ;
        void execute(VMState * vms) override;
};


#endif