#include "IInstruction.hpp"
#include "HALT.hpp"


void HALT::execute(VMState * vms) 
{
    vms->not_halt = false;
}