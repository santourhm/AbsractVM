#include "Register.hpp"










Register::Register(const std::string& n, Value v ) : name(n) , value(v) { } ;


void   Register::RegisterSetValue(Value v)            
{
       value = v;
}


Value   Register::RegisterGetValue() const
{
        return value;
}