#include "Program.hpp"
#include <iostream>
#include "Register.hpp"
#include "EnvRegisters.hpp"
#include "Op_Results.hpp"

extern bool ishalt_program;

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
        Register * PC =  envReg->getPC();
        PC->RegisterSetValue(Value(0));
        int size = instructions.size();
     
        while(1)
        {

                instructions[PC->RegisterGetValue().getInt()]->execute(vms);

                if(ishalt_program)
                {
                        break;
                }

                Value V_PC = PC->RegisterGetValue();
                Op_Results Next_PC = Value(1) + V_PC;

                if(size <= Next_PC.val.getInt() )
                {
                        throw std::runtime_error(" : PC register is out of program code region");
                        break;
                }
                
                PC->RegisterSetValue(Next_PC.val); 

        }

}