#ifndef     MEMORY_ADDRESSOPRAND_HPP
#define     MEMORY_ADDRESSOPRAND_HPP


#include "Operand.hpp"
#include <memory>





class Memory_AddressOperand : public Operand
{
    private:

        int       offset;
        std::unique_ptr<Operand>  RegOperand ;   

    public:

        Memory_AddressOperand(int offset ,std::unique_ptr<Operand>  RegOperand);
        ~Memory_AddressOperand();

        Operand&    getRegisterOperand() const;
        int getOffsetRegister(void)  const ;
        VOp_t getOperandValue() const override;
};


#endif