#include "Memory_AddressOperand.hpp"
#include "Memory.hpp"
#include <iostream>


Memory_AddressOperand::~Memory_AddressOperand() = default;



Memory_AddressOperand::Memory_AddressOperand(int offset ,Register *  RegOperand, Memory * mem)
{
    this->offset = offset;
    this->RegOperand = RegOperand;
    this->mem = mem;
}


Value Memory_AddressOperand::read() const    
{
     //std::cout << RegOperand->read().get_str_type() << std::endl;
     return mem->getWord(static_cast<uint32_t>(offset + RegOperand->read().getAddr()));
} 

void  Memory_AddressOperand::write(const Value& value) const 
{
     mem->setWord(static_cast<uint32_t>(offset + RegOperand->read().getAddr()),value);
}

Value Memory_AddressOperand::getEffectiveAddress() const 
{
    return Value(static_cast<uint32_t>(offset + RegOperand->read().getAddr()));
}


uint32_t  Memory_AddressOperand::getAddress(void)  const
{
     //std::cout << "ADDRESS "  << offset +  RegOperand->read().getAddr() << std::endl;   
     return static_cast<uint32_t>(offset +  RegOperand->read().getAddr());
}
