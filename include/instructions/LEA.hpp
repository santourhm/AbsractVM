#include "IInstruction.hpp"



class LEA : public IInstruction
{
    public:
        
        LEA() = default;
        ~LEA() = default;

        virtual void execute(VMState * vms)  ;

        void debug(VMState * vms) override;
};

