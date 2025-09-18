#include "IInstruction.hpp"



class Label : public IInstruction
{
    public:
        
        Label() = default;
        ~Label() = default;

        virtual void execute(VMState * vms)  ;

        void debug(VMState * vms) override;
};

