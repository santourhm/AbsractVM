






class IInstruction
{
    private:
        
        IOperand op1 ;
        IOperand op2 ;
        IOperand un_op ;

    public:
        
        IInstruction();
        IInstruction(IOperand op);
        IInstruction(IOperand op1, IOperand op1);
        
        virtual  void execute(VMState vms)  ;
        
        ~IInstruction();


    };


