#ifndef     MEMORY_ADDRESSOPRAND_HPP
#define     MEMORY_ADDRESSOPRAND_HPP


#include "IOperand.hpp"
#include "Register.hpp"
#include <memory>





class Memory_AddressOperand : public IOperand
{
    private:

        int         offset;
        Register *  RegOperand ;
        Memory   *  mem;   

    public:

        Memory_AddressOperand(int offset ,Register *  RegOperand, Memory * mem);
        ~Memory_AddressOperand();

        Value read() const override        ;
        void  write(const Value& value) const override;

        uint32_t  getAddress(void)  const;
        Value getEffectiveAddress() const; 

};


#endif