#include "Program.hpp"




void    Program::addIntruction(std::unique_ptr<IInstruction> inst)
{
        this->instructions.push_back(std::move(inst));
}

int     Program::getNumberofInstructions(void)
{
        return this->numberOfInstructions;
}

const std::vector<std::unique_ptr<IInstruction>>& Program::getInstructions() const 
{
       return instructions;
}