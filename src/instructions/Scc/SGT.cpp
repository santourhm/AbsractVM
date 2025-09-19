#include "IInstruction.hpp"
#include "Scc/SGT.hpp"
#include "RRegOperand.hpp"
#include <iostream>
#include <stdexcept>
#include "LabelOperand.hpp"
#include "EnvRegisters.hpp"
#include <unordered_map>

#include "Op_Results.hpp"

void SGT::execute(VMState * vms) 
{

    try
    {
        if (operands.size() != 1 ) {
            throw std::runtime_error(" : SGT requies 1 operand but got " + std::to_string(operands.size()));
        }

        IOperand * base = operands[0].get();
        
        RRegOperand* reg = dynamic_cast<RRegOperand*>(base);

        if(reg == nullptr)
        {
            throw std::runtime_error(" : SGT requires a Rm Operand" );
            return;
        }

        Value v(static_cast<int32_t>(vms->get_sCC()->GT));

        reg->getRegister()->write(v);


    }
    catch(const std::runtime_error& e)
    {
        std::cerr << "Error" << e.what() << '\n';
    }
    
}

void SGT::debug(VMState * vms) 
{
    std::cout << "SGT" << std::endl;
}
