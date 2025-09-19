#ifndef IOPERAND_HPP
#define IOPERAND_HPP


#include <string>
#include "VMState.hpp"
#include "Value.hpp"

class IOperand
{
    
    public:
        
        virtual ~IOperand() = default; 
        virtual Value read() const = 0;
        virtual void write(const Value& value)  = 0;
   
};



#endif