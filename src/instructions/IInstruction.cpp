#include "IInstruction.hpp"








void   IInstruction::addOperand(std::unique_ptr<Operand> op)
{
       this->operands.push_back(std::move(op));
}