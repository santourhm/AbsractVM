#ifndef     IMMEDIATEOPERAND_HPP
#define     IMMEDIATEOPERAND_HPP

#include "IOperand.hpp"
#include "Value.hpp"






class ImmediateOperand  :  public IOperand
{
    private :

         Value val;
    
    public:

        ImmediateOperand(Value value) ;
        ~ImmediateOperand();


        Value read(const VMState& vms) const override;
        void  write(VMState& vms, const Value& value) const override;

};


#endif
