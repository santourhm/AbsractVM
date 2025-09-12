#include "RRegOperand.hpp"





RRegOperand::RRegOperand(Register* r) : reg(r) {}

Register* RRegOperand::getRegister() const
{
    return reg;
}

Value RRegOperand::read([[maybe_unused]] const VMState& vms) const 
{
    return reg->RegisterGetValue();
}

void RRegOperand::write([[maybe_unused]] VMState& vms, const Value& value) const
{
    reg->RegisterSetValue(value);
}