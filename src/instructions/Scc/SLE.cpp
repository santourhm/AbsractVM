#include "IInstruction.hpp"
#include "Scc/SLE.hpp"
#include "RRegOperand.hpp"
#include <iostream>
#include <stdexcept>
#include "LabelOperand.hpp"
#include "EnvRegisters.hpp"
#include <unordered_map>

#include "Op_Results.hpp"

void SLE::execute(VMState * vms) 
{

    try
    {
        if (operands.size() != 1 ) {
            throw std::runtime_error(" : SLE requires 1 operand but got " + std::to_string(operands.size()));
        }

        IOperand * base = operands[0].get();
        
        RRegOperand* reg = dynamic_cast<RRegOperand*>(base);

        if(reg == nullptr)
        {
            throw std::runtime_error(" : SLE requires a Rm Operand" );
            return;
        }

        Value v(static_cast<int32_t>(vms->get_sCC()->LE));

        reg->getRegister()->RegisterSetValue(v);
        

    }
    catch(const std::runtime_error& e)
    {
        std::cerr << "Error" << e.what() << '\n';
    }
    
}

void SLE::debug(VMState * vms) 
{
    std::cout << "SLE" << std::endl;
}
