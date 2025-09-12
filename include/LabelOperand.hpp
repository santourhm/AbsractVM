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


        Value read(const VMState& vms) const override        ;
        void write(VMState& vms, const Value& value) const override;

};


#endif