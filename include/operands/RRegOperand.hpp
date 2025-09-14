#ifndef RREGOPERAND_HPP
#define RREGOPERAND_HPP

#include "IOperand.hpp"
#include <string>
#include <RRegister.hpp>





class RRegOperand : public IOperand
{
    private:

        Register* reg; 
    
    public:

        RRegOperand(Register* r);
        Register* getRegister() const;

        Value read() const override        ;
        void write(const Value& value) const override;
};

#endif