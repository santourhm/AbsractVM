#include "ImmediateOperand.hpp"



ImmediateOperand::~ImmediateOperand() {};

ImmediateOperand::ImmediateOperand(Value value)
{
    this->val  = value ;
}



Value ImmediateOperand::read() const    
{
     return val;
}

void  ImmediateOperand::write(const Value& value) const 
{

}