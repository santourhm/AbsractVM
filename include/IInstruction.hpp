#ifndef IINSTRUCTION_HPP
#define IINSTRUCTION_HPP

#include <vector>
#include <string>
#include "Operand.hpp"
#include <memory>



class IInstruction
{
    protected :

        std::vector<std::unique_ptr<Operand>> operands;
    
    public:
        
        void   addOperand(std::unique_ptr<Operand> op);
        virtual ~IInstruction() = default;

        virtual void execute(/* VMState vms */) = 0 ;
};



#endif

