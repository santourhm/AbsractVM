#include  "StringLiteralOperand.hpp"




StringLiteralOperand::~StringLiteralOperand() {}



StringLiteralOperand::StringLiteralOperand(std::string value)
{
    this->v   = value;
}


Value StringLiteralOperand::read([[maybe_unused]] const VMState& vms) const 
{
    return Value(this->v);
}

void StringLiteralOperand::write([[maybe_unused]] VMState& vms, [[maybe_unused]] const Value& value) const 
{

}


