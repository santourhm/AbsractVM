#ifndef     MEMORY_ADDRESSOPRAND_HPP
#define     MEMORY_ADDRESSOPRAND_HPP


#include "IOperand.hpp"
#include <memory>





class Memory_AddressOperand : public IOperand
{
    private:

        int       offset;
        std::unique_ptr<IOperand>  RegOperand ;   

    public:

        Memory_AddressOperand(int offset ,std::unique_ptr<IOperand>  RegOperand);
        ~Memory_AddressOperand();

        Value read(const VMState& vms) const override        ;
        void  write(VMState& vms, const Value& value) const override;
};


#endif