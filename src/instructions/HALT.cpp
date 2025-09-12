#include "IInstruction.hpp"
#include "HALT.hpp"

extern bool ishalt_program; 

void HALT::execute(VMState * vms) 
{
    ishalt_program = true;
}