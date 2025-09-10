#include "IInstruction.hpp"




void   IInstruction::addOperand(std::unique_ptr<Operand> op)
{
       this->operands.push_back(std::move(op));
}

Operand * IInstruction::getLeftOperand(void)
{
       return operands[0].get();
}

Operand * IInstruction::getRightOperand(void)
{
       return operands[1].get();
}