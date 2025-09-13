#include "IInstruction.hpp"
#include "BRA.hpp"
#include "RRegOperand.hpp"
#include <iostream>
#include <stdexcept>
#include "LabelOperand.hpp"
#include "EnvRegisters.hpp"
#include <unordered_map>

#include "Op_Results.hpp"

void BRA::execute(VMState * vms) 
{

    try
    {
        if (operands.size() != 1 ) {
            throw std::runtime_error(" : BRA requires 1 operand but got " + std::to_string(operands.size()));
        }

        IOperand * base = operands[0].get();
        
        LabelOperand* label = dynamic_cast<LabelOperand*>(base);

        if(label == nullptr)
        {
            throw std::runtime_error(" : BRA requires a Label Operand" );
        }

        Register *  PC = vms->getEnv_Registers()->getPC();

        std::string label_str = label->read(*vms).getStr();

        std::unordered_map<std::string, Value>&  Symbol_Table = vms->getSymbol_Table();

        if (Symbol_Table.find(label_str) == Symbol_Table.end()) 
        {
            throw std::runtime_error(" : Undefined label '" + label_str + "'");
        }

        Value addr = Symbol_Table.at(label_str);
        std::cout << "addr" << addr.getAddr() << '\n';

        PC->RegisterSetValue(addr);

    }
    catch(const std::runtime_error& e)
    {
        std::cerr << "Error" << e.what() << '\n';
    }
    
    
}