#ifndef HALT_HPP
#define HALT_HPP
#include "IInstruction.hpp"

class HALT : public IInstruction
{

    public:
        HALT() =  default;
        ~HALT() =  default;

        void execute(VMState * vms) override ;
        void debug(VMState * vms) override;
};


#endif