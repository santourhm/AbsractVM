#ifndef LABELOPERAND_HPP
#define LABELOPERAND_HPP

#include <string>
#include "IOperand.hpp"





class LabelOperand  :  public IOperand
{
    private : 
        
        Value    label;

    public:

        LabelOperand(Value  v) ;
        ~LabelOperand();


        Value read() const override        ;
        void write(const Value& value) const override;

};


#endif