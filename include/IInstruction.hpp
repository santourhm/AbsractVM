#ifndef IINSTRUCTION_HPP
#define IINSTRUCTION_HPP

#include <vector>
#include <string>
#include "Operand.hpp"
#include <memory>
#include "VMState.hpp"


class IInstruction
{
    protected :

        std::vector<std::unique_ptr<Operand>> operands;
    
    public:
        
        void addOperand(std::unique_ptr<Operand> operand);
        
        Operand * getLeftOperand(void);
        Operand * getRightOperand(void);
        
        virtual ~IInstruction() = default;
        virtual void execute(VMState * vms) = 0 ;
};



#endif

