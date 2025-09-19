#include "Debugger.hpp"
#include <stdexcept>
#include "EnvRegisters.hpp"
#include <iostream>



void Debugger::setBreakpoint(uint32_t  a_bkpt)
{

    if(a_bkpt >= size)
        throw std::out_of_range("");
    
    bkpt[a_bkpt] = true;
}

void  Debugger::execute(VMState * vms)
{
        EnvRegisters * envReg = vms->getEnv_Registers();
        Register * PC =  envReg->getPC();
        Register * SP  = envReg->getSP();

        while (true)
        {
                Value V_PC = PC->read();
                
                if(size <= V_PC.getAddr() )
                {                       
                        std::cout << " End of program !" << std::endl;
                        break;
                }


                if(bkpt[V_PC.getAddr()])
                {
                    std::cout << "Breakpoint done at : 0x" << std::hex << V_PC.getAddr() << std::endl;
                    break;
                }

                instructions[V_PC.getAddr()]->execute(vms);

                V_PC++;

                PC->write(V_PC); 
        }
}



void  Debugger::execute_OneInstruction(VMState * vms)
{
      EnvRegisters * envReg = vms->getEnv_Registers();
      Register * PC =  envReg->getPC();
      Register * SP  = envReg->getSP();


       Value V_PC = PC->read();
                
        if(size <= V_PC.getAddr() )
        {                       
                std::cout << " End of program !" << std::endl;
                return;
        }

        instructions[V_PC.getAddr()]->execute(vms);

        V_PC++;

        PC->write(V_PC); 
}