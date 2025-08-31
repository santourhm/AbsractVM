#ifndef RREGOPERAND_HPP
#define RREGOPERAND_HPP

#include "Operand.hpp"
#include <string>






class RRegOperand : public Operand
{
    private:

        int RegIndex;
    
    public:

        RRegOperand();
        RRegOperand(int RegIndex);    
        ~RRegOperand();

        int     getRegisterIndex()   const  ;
};

#endif