#include  "StringLiteralOperand.hpp"




StringLiteralOperand::~StringLiteralOperand() {}



StringLiteralOperand::StringLiteralOperand(std::string value)
{
    this->value   = value;
}

std::string   StringLiteralOperand::getStringValue(void)   const
{
    return this->value;
}






