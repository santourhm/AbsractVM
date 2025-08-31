#ifndef STRINGLITERALOPERAND_HPP
#define STRINGLITERALOPERAND_HPP


#include "Operand.hpp"



class StringLiteralOperand : public Operand
{
    private:

        std::string  value ;
    
    public:
    
        StringLiteralOperand(std::string  value);
        ~StringLiteralOperand();

        std::string getStringValue(void)  const ;  
};


#endif