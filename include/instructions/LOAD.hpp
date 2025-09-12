#ifndef LOAD_HPP
#define LOAD_HPP

#include "IInstruction.hpp"


class LOAD : public IInstruction
{ 
    
    public:
        
        LOAD() = default;
        
        void execute(VMState * vms) override;

};



#endif