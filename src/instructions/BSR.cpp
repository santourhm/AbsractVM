#include "IInstruction.hpp"
#include "BSR.hpp"
#include "RRegOperand.hpp"
#include <iostream>
#include <stdexcept>
#include "LabelOperand.hpp"
#include "Memory_AddressOperand.hpp"
#include "EnvRegisters.hpp"
#include <unordered_map>
#include "Memory.hpp"
#include "Op_Results.hpp"
#include <iostream>

void BSR::execute(VMState * vms) 
{
    try {
        if (operands.size() != 1) {
            throw std::runtime_error("BSR requires 1 operand but got " 
                                     + std::to_string(operands.size()));
        }

        Value addr;

        IOperand * base = operands[0].get();
        LabelOperand* label = dynamic_cast<LabelOperand*>(base);
        Memory_AddressOperand* Memory_Op = dynamic_cast<Memory_AddressOperand*>(base);
        if(label != nullptr) {

            std::string label_str = label->read().getStr();
            std::unordered_map<std::string, Value>& Symbol_Table = vms->getSymbol_Table();

            if (Symbol_Table.find(label_str) == Symbol_Table.end()) 
            {
                throw std::runtime_error("Undefined label '" + label_str + "'");
                return;
            }
            addr = Symbol_Table.at(label_str);
            //std::cout << "LABEL Addr : " << addr.getAddr() << std::endl;
        }
        else if(Memory_Op != nullptr)
        {
            addr = Memory_Op->getEffectiveAddress();
            //std::cout << "MemOP Addr : " << addr.getAddr() << std::endl;

        }

        Register * PC = vms->getEnv_Registers()->getPC();
        Register * SP = vms->getEnv_Registers()->getSP();
        Register * LB = vms->getEnv_Registers()->getLB();
        Memory * mem  = vms->getMemory();

        uint32_t V_SP = SP->RegisterGetValue().getAddr();
        uint32_t V_LB = LB->RegisterGetValue().getAddr();
        Value V_PC    = PC->RegisterGetValue();

        SP->RegisterSetValue(Value(V_SP + 2));

        mem->setWord(V_SP + 1, V_PC);

        mem->setWord(V_SP + 2, Value(V_LB));

        LB->RegisterSetValue(Value(V_SP + 2));

        PC->RegisterSetValue(addr);

    }
    catch(const std::runtime_error& e) {
        std::cerr << "Error at " << __FILE__ << ":" << __LINE__ 
                  << " " << e.what() << '\n';
    }
}


void BSR::debug(VMState * vms) 
{
    std::cout << "BSR" << std::endl;
}
