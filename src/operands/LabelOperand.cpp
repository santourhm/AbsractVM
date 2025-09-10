#include "LabelOperand.hpp"









LabelOperand::LabelOperand(std::string label) : label(label)  {};

LabelOperand::~LabelOperand()   {};


VOp_t LabelOperand::getOperandValue() const
{
    return this->label;
}
