#include "Memory_AddressOperand.hpp"




Memory_AddressOperand::~Memory_AddressOperand() {};



Memory_AddressOperand::Memory_AddressOperand(int offset ,std::unique_ptr<Operand>  RegOperand)
{
    this->offset = offset;
    this->RegOperand = std::move(RegOperand);
}

Operand& Memory_AddressOperand::getRegisterOperand() const {
    return *RegOperand;
}
        
int Memory_AddressOperand::getOffsetRegister(void)  const 
{
    return this->offset;
}

VOp_t Memory_AddressOperand::getOperandValue() const
{
    return 0;
}