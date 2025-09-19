#include "IInstruction.hpp"
#include "Bcc/BGT.hpp"
#include "RRegOperand.hpp"
#include <iostream>
#include <stdexcept>
#include "LabelOperand.hpp"
#include "EnvRegisters.hpp"
#include <unordered_map>

#include "Op_Results.hpp"

void BGT::execute(VMState * vms) 
{

    try
    {
        if (operands.size() != 1 ) {
            throw std::runtime_error(" : BGT requies 1 operand but got " + std::to_string(operands.size()));
        }

        IOperand * base = operands[0].get();
        
        LabelOperand* label = dynamic_cast<LabelOperand*>(base);

        if(label == nullptr)
        {
            throw std::runtime_error(" : BGT requies a Label Operand" );
            return;
        }

        if(!vms->get_sCC()->GT)
        {
            return;
        }

        Register *  PC = vms->getEnv_Registers()->getPC();

        std::string label_str = label->read().getStr();

        std::unordered_map<std::string, Value>&  Symbol_Table = vms->getSymbol_Table();

        if (Symbol_Table.find(label_str) == Symbol_Table.end()) 
        {
            throw std::runtime_error(" : Undefined label '" + label_str + "'");
            vms->not_halt = false;
            return;
        }

        Value addr = Symbol_Table.at(label_str);

 
        PC->write(addr);


    }
    catch(const std::runtime_error& e)
    {
        std::cerr << "Error" << e.what() << '\n';
    }
    
}

void BGT::debug(VMState * vms)
{
    std::cout << "BGT      " ;

    size_t numberOf_Operands = operands.size();

    for (size_t a = 0; a < numberOf_Operands ; a++ )
    {
        if(a >= 1)  std::cout << " , ";
        std::cout << operands[a].get()->show();
    }

    std::cout << std::endl;
}

