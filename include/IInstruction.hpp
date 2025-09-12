#ifndef IINSTRUCTION_HPP
#define IINSTRUCTION_HPP

#include <vector>
#include <string>
#include "IOperand.hpp"
#include <memory>
#include "VMState.hpp"


class IInstruction
{
    protected :

        std::vector<std::unique_ptr<IOperand>> operands;
    
    public:
        
        void addOperand(std::unique_ptr<IOperand> operand);
        
        virtual ~IInstruction() = default;
        virtual void execute(VMState * vms) = 0 ;
};



#endif

