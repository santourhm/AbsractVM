#ifndef RREGOPERAND_HPP
#define RREGOPERAND_HPP

#include "IOperand.hpp"
#include "Register.hpp"
#include <string>





class RRegOperand : public IOperand
{
    private:

        Register* reg; 
    
    public:

        RRegOperand(Register* r);
        Register* getRegister() const;

        Value read() const override        ;
        void write(const Value& value) override;
        std::string show() const override;

};

#endif