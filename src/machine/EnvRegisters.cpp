#include "EnvRegisters.hpp"
#include <string>



EnvRegisters::EnvRegisters()
{

    GB = std::make_unique<Register>("GB",Value(0));
    LB = std::make_unique<Register>("LB",Value(0));
    SP = std::make_unique<Register>("SP",Value(static_cast<uint32_t>(0)));
    PC = std::make_unique<Register>("PC",Value(static_cast<uint32_t>(0)));
    
    for(int i = 0 ; i < NUMBER_MAX_GENPORPSE_REG ; i++)
    {
        RRegisters.push_back(std::make_unique<RRegister>(i));
    }

}


EnvRegisters::~EnvRegisters() = default ;


RRegister *  EnvRegisters::getR(int i) 
{
    return  RRegisters[i].get();
}


Register *  EnvRegisters::getGB(void)  
{
    return GB.get();
}


Register *  EnvRegisters::getLB()  
{
    return LB.get();
}


Register *  EnvRegisters::getSP()  
{
    return LB.get();
}


Register *  EnvRegisters::getPC()  
{
    return PC.get();
}
