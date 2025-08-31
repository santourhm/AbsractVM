#include "RRegOperand.hpp"




RRegOperand::RRegOperand() {}
RRegOperand::~RRegOperand()  {}


RRegOperand::RRegOperand(int RegIndex)
{
    this->RegIndex   = RegIndex;
}


int RRegOperand::getRegisterIndex(void)  const
{
    return this->RegIndex;
}
