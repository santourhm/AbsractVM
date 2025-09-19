#include "Program.hpp"
#include <iostream>
#include "Register.hpp"
#include "EnvRegisters.hpp"
#include "Op_Results.hpp"
#include "Debugger.hpp"

extern bool ishalt_program;
extern bool debug_mode;

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
        }

}



void  Program::debugProgram(VMState* vms)
{
        int i = 0;
        EnvRegisters * envReg = vms->getEnv_Registers();
        Register * PC =  envReg->getPC();
        Register * SP  = envReg->getSP();

        uint32_t   pc = 0x0;
        PC->write(Value(pc));
        int size = instructions.size();
        Value V_PC = PC->read();
        
        Debugger debug(vms,instructions);

            std::cout << R"(
                __      __       .__                                  ________               
                /  \    /  \ ____ |  |   ____  ____   _____   ____    \_____  \___  __ ____  
                \   \/\/   // __ \|  |  /  _ \/    \ /     \_/ __ \    /   |   \  \/ // __ \ 
                \        /\  ___/|  |_(  <_> )   |  \  Y Y  \  ___/   /    |    \   /\  ___/ 
                \__/\  /  \___  >____/\____/|___|  /__|_|  /\___  >  \_______  /\_/  \___  >
                        \/       \/                 \/      \/     \/           \/          \/ 
                        ---- AVM Debugger ----
                )" << std::endl;

        while (vms->not_halt)
        {       
                std::cout << "-----> " ;
                
                Value V_PC = PC->read();
                instructions[V_PC.getAddr()]->debug(vms);
                std::cout << std::endl ;

                std::cout << "$ avm-dbg >> " ;
                std::string cmd ;

                std::getline(std::cin,cmd);

                if(cmd == "s" || cmd == "step")
                {

                        std::cout <<  std::endl;
                        debug.execute_OneInstruction(vms);

                }
                else if(cmd == "c" || cmd == "continue")
                {
                        
                        std::cout <<  std::endl;
                        debug.execute(vms);

                }
                else if (cmd.rfind("p", 0) == 0)  
                {
                        std::string reg = cmd.substr(2);  
                        

                        try {
                                debug.setReg_Pointer(reg);
                                std::cout << "pointing on : " << reg << std::endl;

                        }
                        catch (const std::runtime_error& e) {
                                std::cerr << e.what() << std::endl;
                        }
                }
                else if(cmd.rfind("rd", 0) == 0)
                {
                        try
                        {  
                                Value val =  debug.read_Pointer() ;

                                std::cout << "Value = ";

                                if(val.getType() == TypeTag::STRING)
                                {
                                        std::cout << val.getStr() ;
                                }
                                else if(val.getType() == TypeTag::ADDRESS)
                                {
                                        std::cout << "0x" << std::hex << val.getAddr();
                                }
                                else if(val.getType() == TypeTag::INTEGER)
                                {
                                        std::cout << val.getInt();
                                }
                                else if(val.getType() == TypeTag::FLOAT)
                                {
                                        std::cout << val.getFloat();
                                }
                                else if(val.getType() == TypeTag::NULL_ADDR)
                                {
                                        std::cout << "null";
                                }
                                else
                                {
                                        std::cout << "UNDEFINED" ;
                                }
                                std::cout  << std::endl;
                        }
                        catch(const std::runtime_error& e)
                        {
                                std::cerr << e.what() << std::endl;
                        }
                        
                }
                else if(cmd.rfind("b",0) == 0)
                {
                        try 
                        {
                           uint32_t addr = std::stoul(cmd.substr(2), nullptr, 0); 
                           debug.setBreakpoint(addr);
                           std::cout << "Breakpoint set at 0x" << std::hex << addr << std::endl;

                        } catch (...) 
                        {
                                std::cerr << "Invalid address." << std::endl;
                        }
                }
                else
                {
                    std::cerr << "Error : invalid input" << std::endl;
                }

                std::cout << std::endl ;

        }
        
        
        
}