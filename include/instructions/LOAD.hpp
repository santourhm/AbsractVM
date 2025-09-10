#ifndef LOAD_HPP
#define LOAD_HPP

#include "IInstruction.hpp"


class LOAD : public IInstruction
{ 
    
    public:
        
        LOAD(std::vector<std::unique_ptr<Operand>> ops);
        LOAD() = default;
        
        void execute(VMState * vms);

};



#endif