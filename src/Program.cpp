#include "Program.hpp"
#include <iostream>



void    Program::addIntruction(std::unique_ptr<IInstruction> inst)
{
        this->instructions.push_back(std::move(inst));
        numberOfInstructions++;
}

int     Program::getNumberofInstructions(void)
{
        return this->numberOfInstructions;
}

const   std::vector<std::unique_ptr<IInstruction>>& Program::getInstructions() const 
{
        return instructions;
}

void    Program::setInstructions(std::vector<std::unique_ptr<IInstruction>>&& instrs)
{
        numberOfInstructions = instrs.size();
        instructions = std::move(instrs);
}

void Program::executeProgram(VMState* vms)
{

    int i = 0;
    EnvRegisters * envReg = vms->getEnv_Registers();
    for (const auto& inst : instructions) {
        inst->execute(vms);
    }   
}