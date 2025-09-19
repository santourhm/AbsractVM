#include "Register.hpp"




Register::Register(const std::string& n, Value v)
    : name(n), value(v) { }



void Register::write(const Value& v)
{
    value = v;
}



Value Register::read() const
{
    return value;
}
