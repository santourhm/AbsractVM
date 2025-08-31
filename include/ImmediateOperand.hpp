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

        int getImmediateValue() const ;

};


#endif
