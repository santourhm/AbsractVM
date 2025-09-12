#ifndef IOPERAND_HPP
#define IOPERAND_HPP


#include <string>
#include "VMState.hpp"
#include "Value.hpp"

class IOperand
{
    
    public:
        
        virtual ~IOperand() = default; 
        virtual Value read(const VMState& vms) const = 0;
        virtual void write(VMState& vms, const Value& value) const = 0;
   
};



#endif