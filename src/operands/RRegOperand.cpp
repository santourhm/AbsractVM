#include "RRegOperand.hpp"





RRegOperand::RRegOperand(Register* r) : reg(r) {}

Register* RRegOperand::getRegister() const
{
    return reg;
}

Value RRegOperand::read() const 
{
    return reg->read();
}

void RRegOperand::write(const Value& value) 
{
    reg->write(value);
}