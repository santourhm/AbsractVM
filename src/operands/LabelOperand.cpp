#include "LabelOperand.hpp"









LabelOperand::LabelOperand(std::string label) : label(label)  {};

LabelOperand::~LabelOperand()   {};


std::string LabelOperand::getLabelValue(void) const 
{
    return this->label;
}
