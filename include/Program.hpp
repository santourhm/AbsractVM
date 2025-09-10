#ifndef  PROGRAM_HPP
#define  PROGRAM_HPP

#include "IInstruction.hpp"
#include <memory>
#include <vector>
#include "VMState.hpp"

class Program
{
    private:
    
        int numberOfInstructions = 0;
        std::vector<std::unique_ptr<IInstruction>> instructions;
    
    public:

        void            addIntruction(std::unique_ptr<IInstruction> inst);
        int             getNumberofInstructions(void);

        
        void setInstructions(std::vector<std::unique_ptr<IInstruction>>&& instrs) ;
        const std::vector<std::unique_ptr<IInstruction>>& getInstructions() const ;
           

        void executeProgram(VMState* vms);

};

#endif