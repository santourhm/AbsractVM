#include "LabelOperand.hpp"









LabelOperand::LabelOperand(Value label) : label(label)  {};

LabelOperand::~LabelOperand()   {};



Value LabelOperand::read([[maybe_unused]] const VMState& vms) const    
{
     return label;
}

void  LabelOperand::write([[maybe_unused]]  VMState& vms,[[maybe_unused]]  const Value& value) const 
{

}