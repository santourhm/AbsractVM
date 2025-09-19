#include  "StringLiteralOperand.hpp"




StringLiteralOperand::~StringLiteralOperand() {}



StringLiteralOperand::StringLiteralOperand(std::string value)
{
    this->v   = value;
}


Value StringLiteralOperand::read() const 
{
    return Value(this->v);
}

void StringLiteralOperand::write(const Value& value)  
{

}


std::string StringLiteralOperand::show()   const
{
    return v;
}
