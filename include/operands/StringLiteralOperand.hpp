#ifndef STRINGLITERALOPERAND_HPP
#define STRINGLITERALOPERAND_HPP


#include "IOperand.hpp"
#include "Value.hpp"


class StringLiteralOperand : public IOperand
{
    private:

        std::string v ;
    
    public:
    
        StringLiteralOperand(std::string  value);
        ~StringLiteralOperand();

        Value read() const override        ;
        void  write(const Value& value) const override;
};


#endif