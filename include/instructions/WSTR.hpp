#ifndef WSTR_HPP
#define WSTR_HPP

#include "IInstruction.hpp"
#include "StringLiteralOperand.hpp"

class WSTR : public IInstruction
{
    
    public:

        WSTR(std::vector<std::unique_ptr<Operand>> ops);
        void  execute(/*VMState vms*/)  override;
};




#endif