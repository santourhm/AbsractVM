#ifndef LABELOPERAND_HPP
#define LABELOPERAND_HPP

#include <string>
#include "Operand.hpp"





class LabelOperand  :  public Operand
{
    private : 
        
        std::string    label;

    public:

        LabelOperand(std::string) ;
        ~LabelOperand();

        std::string getLabelValue() const ;

};


#endif