#ifndef QUO_HPP
#define QUO_HPP

#include "IInstruction.hpp"




class QUO  : public  IInstruction
{
    public :

        ~QUO() = default ;
        void execute(VMState * vms) override;
};


#endif