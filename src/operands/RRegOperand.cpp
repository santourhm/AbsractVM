#include "RRegOperand.hpp"





RRegOperand::RRegOperand(Register* r) : reg(r) {}

VOp_t RRegOperand::getOperandValue() const
{
    return reg->RegisterGetValue();
}


Register* RRegOperand::getRegister() const
{
    return reg;
}