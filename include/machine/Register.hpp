#ifndef  REGISTER_HPP
#define  REGISTER_HPP
#include <string>
#include <memory>
#include <vector>
#include <variant>
#include "VMtypes.hpp"
#include "IOperand.hpp"
#include "Value.hpp"


class Register  : public IOperand
{
    private:
        
        std::string     name;
        Value   value       ;

    public:

        Register(const std::string& n, Value v);
        ~Register() {} ;

        void  write(const Value& value)  override;
        Value   read()        const  override ;
        std::string show() const override;

        
};



#endif