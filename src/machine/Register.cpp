#include "Register.hpp"










Register::Register(const std::string& n, VOp_t v ) : name(n) , value(v) { } ;


void   Register::RegisterSetValue(VOp_t v)            
{
       value = v;
}


VOp_t   Register::RegisterGetValue() const
{
        return value;
}