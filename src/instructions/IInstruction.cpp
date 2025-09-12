#include "IInstruction.hpp"




void   IInstruction::addOperand(std::unique_ptr<IOperand> op)
{
       this->operands.push_back(std::move(op));
}

