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

void Program::verifyProgram(void)
{
//      for(auto& ins : instructions)
//      {
//         if(ins)
//      }
}


void Program::executeProgram(VMState* vms)
{

        int i = 0;
        EnvRegisters * envReg = vms->getEnv_Registers();
        Register * PC =  envReg->getPC();
        Register * SP  = envReg->getSP();

        uint32_t   pc = 0x0;
        PC->write(Value(pc));
        int size = instructions.size();
        
        while(vms->not_halt)
        {                 
        
        //#ifdef DEBUG_MODE
                instructions[PC->read().getAddr()]->debug(vms);
        //#endif

                instructions[PC->read().getAddr()]->execute(vms);

                if(!vms->not_halt)
                {       
                        break;
                }
                                          
                Value V_PC = PC->read();
                V_PC++;
 
                if(size <= V_PC.getAddr() )
                {
                        
                        throw std::runtime_error(" : PC register is out of program code region");
                        break;
                }

                PC->write(V_PC); 
                std::cout << "SP = " << SP->read().getAddr() << std::endl; 
        }

}