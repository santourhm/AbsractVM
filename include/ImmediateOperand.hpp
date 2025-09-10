#ifndef     IMMEDIATEOPERAND_HPP
#define     IMMEDIATEOPERAND_HPP

#include "Operand.hpp"







class ImmediateOperand  :  public Operand
{
    private :
    
        int    value;
    
    public:

        ImmediateOperand(int value) ;
        ~ImmediateOperand();

        VOp_t getOperandValue()  const override; 

};


#endif
