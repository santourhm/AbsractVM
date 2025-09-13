#include "WSTR.hpp"
#include "StringLiteralOperand.hpp"
#include <iostream>
#include <string>



void WSTR::execute(VMState* vms)  
{

    IOperand* base = operands[0].get();
    StringLiteralOperand* str_op = dynamic_cast<StringLiteralOperand*>(base);
    if (!str_op) {
        throw std::runtime_error("WSTR requires a StringLiteralOperand");
    }

    std::string str_val = str_op->read().getStr();
    
    size_t start = 0;
    size_t pos;
    
    while ((pos = str_val.find('\n', start)) != std::string::npos) 
    {
        std::cout << str_val.substr(start, pos - start) << '\n';
        start = pos + 1;
    }
    std::cout << str_val.substr(start);

}