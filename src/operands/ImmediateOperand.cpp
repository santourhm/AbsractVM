#include "ImmediateOperand.hpp"



ImmediateOperand::~ImmediateOperand() {};

ImmediateOperand::ImmediateOperand(int value)
{
    this->value  = value ;
}


int ImmediateOperand::getImmediateValue() const 
{
    return this->value;
}

