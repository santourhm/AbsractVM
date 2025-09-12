#ifndef  REGISTER_HPP
#define  REGISTER_HPP
#include <string>
#include <memory>
#include <vector>
#include <variant>
#include "VMtypes.hpp"
#include "IOperand.hpp"
#include "Value.hpp"


class Register  
{
    private:
        
        std::string     name;
        Value   value       ;

    public:

        Register(const std::string& n, Value v);
        ~Register() = default ;

        void    RegisterSetValue(Value v)         ;
        Value   RegisterGetValue()        const   ;
        
};



#endif