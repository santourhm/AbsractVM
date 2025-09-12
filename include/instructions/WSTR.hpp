#ifndef WSTR_HPP
#define WSTR_HPP

#include "IInstruction.hpp"
#include "StringLiteralOperand.hpp"
#include "VMState.hpp"

class WSTR : public IInstruction
{
    
    public:

        WSTR() = default;
        void  execute(VMState * vms)  override;
};




#endif