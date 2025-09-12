#include "Memory_AddressOperand.hpp"




Memory_AddressOperand::~Memory_AddressOperand() {};



Memory_AddressOperand::Memory_AddressOperand(int offset ,std::unique_ptr<IOperand>  RegOperand)
{
    this->offset = offset;
    this->RegOperand = std::move(RegOperand);
}


Value Memory_AddressOperand::read([[maybe_unused]] const VMState& vms) const    
{
     return Value(0);
}

void  Memory_AddressOperand::write([[maybe_unused]]  VMState& vms,[[maybe_unused]]  const Value& value) const 
{

}