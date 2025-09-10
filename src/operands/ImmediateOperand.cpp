#include "ImmediateOperand.hpp"



ImmediateOperand::~ImmediateOperand() {};

ImmediateOperand::ImmediateOperand(int value)
{
    this->value  = value ;
}


VOp_t ImmediateOperand::getOperandValue()  const 
{
    return this->value;
}

