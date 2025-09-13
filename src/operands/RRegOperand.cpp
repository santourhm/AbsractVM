#include "RRegOperand.hpp"





RRegOperand::RRegOperand(Register* r) : reg(r) {}

Register* RRegOperand::getRegister() const
{
    return reg;
}

Value RRegOperand::read() const 
{
    return reg->RegisterGetValue();
}

void RRegOperand::write(const Value& value) const
{
    reg->RegisterSetValue(value);
}