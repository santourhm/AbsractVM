#include "ImmediateOperand.hpp"



ImmediateOperand::~ImmediateOperand() {};

ImmediateOperand::ImmediateOperand(Value value)
{
    this->val  = value ;
}



Value ImmediateOperand::read([[maybe_unused]] const VMState& vms) const    
{
     return val;
}

void  ImmediateOperand::write([[maybe_unused]]  VMState& vms,[[maybe_unused]]  const Value& value) const 
{

}