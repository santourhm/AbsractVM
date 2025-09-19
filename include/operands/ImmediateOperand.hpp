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


        Value read() const override;
        void  write(const Value& value)  override;
        std::string show() const override;


};


#endif
