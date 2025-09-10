#ifndef RREGOPERAND_HPP
#define RREGOPERAND_HPP

#include "Operand.hpp"
#include <string>
#include <RRegister.hpp>





class RRegOperand : public Operand
{
    private:

        Register* reg; 
    
    public:

        RRegOperand(Register* r);
        Register* getRegister() const;
        VOp_t getOperandValue() const override;
};

#endif