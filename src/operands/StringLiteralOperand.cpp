#include  "StringLiteralOperand.hpp"




StringLiteralOperand::~StringLiteralOperand() {}



StringLiteralOperand::StringLiteralOperand(std::string value)
{
    this->value   = value;
}

VOp_t   StringLiteralOperand:: getOperandValue(void)   const
{
    return this->value;
}






