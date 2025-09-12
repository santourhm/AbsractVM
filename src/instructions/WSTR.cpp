#include "WSTR.hpp"
#include "StringLiteralOperand.hpp"
#include <iostream>
#include <string>




void  WSTR::execute(VMState* vms)  
{

    std::cout << "execute WSTR" << '\n';
    StringLiteralOperand* str_op = static_cast<StringLiteralOperand*>(operands[0].get());
    std::cout << str_op->read(*vms).getStr() << '\n' ;

}