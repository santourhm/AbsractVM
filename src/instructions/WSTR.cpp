#include "WSTR.hpp"
#include "StringLiteralOperand.hpp"
#include <iostream>





WSTR::WSTR(std::vector<std::unique_ptr<Operand>> ops)
{
    operands = std::move(ops);
}

void  WSTR::execute(/*VMState vms*/)  
{

    StringLiteralOperand* str_op = static_cast<StringLiteralOperand*>(operands[0].get());
    std::cout << str_op->getStringValue() << '\n' ;

}