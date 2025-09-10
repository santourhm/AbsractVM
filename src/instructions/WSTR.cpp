#include "WSTR.hpp"
#include "StringLiteralOperand.hpp"
#include <iostream>
#include <string>




WSTR::WSTR(std::vector<std::unique_ptr<Operand>> ops)
{
    operands = std::move(ops);
}

void  WSTR::execute(VMState* vms)  
{

    std::cout << "execute WSTR" << '\n';
    StringLiteralOperand* str_op = static_cast<StringLiteralOperand*>(operands[0].get());
    std::cout << std::get<std::string>(str_op->getOperandValue()) << '\n' ;

}