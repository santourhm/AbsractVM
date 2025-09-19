#include "ImmediateOperand.hpp"



ImmediateOperand::~ImmediateOperand() {};

ImmediateOperand::ImmediateOperand(Value value)
{
    this->val  = value ;
}



Value ImmediateOperand::read() const    
{
     return val;
}

void  ImmediateOperand::write(const Value& value)  
{

}



std::string ImmediateOperand::show() const    
{
    if(val.getType() == TypeTag::STRING)
    {
        return '#' + val.getStr();
    }
    if(val.getType() == TypeTag::ADDRESS)
    {
        return '#' + std::to_string(val.getAddr());
    }
    if(val.getType() == TypeTag::INTEGER)
    {
        return '#' + std::to_string(val.getInt());
    }
    if(val.getType() == TypeTag::NULL_ADDR)
    {
        return std::string("#null");
    }
    
    return "UKNOWN TYPE";
    
}