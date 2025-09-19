#include "LabelOperand.hpp"









LabelOperand::LabelOperand(Value label) : label(label)  {};

LabelOperand::~LabelOperand()   {};



Value LabelOperand::read() const    
{
     return label;
}

void  LabelOperand::write(const Value& value) 
{

}