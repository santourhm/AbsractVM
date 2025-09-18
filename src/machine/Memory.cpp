#include "Memory.hpp"
#include <stdexcept>
#include "EnvRegisters.hpp"
#include <iostream>

Memory::Memory(EnvRegisters * r_env,size_t total_memory_words) 
{
    
    mem.resize(total_memory_words);
    gb_val = r_env->getGB();
    lb_val = r_env->getLB();
    sp_val = r_env->getSP();
    initialize();
}

void Memory::initialize() 
{
    gb_val->RegisterSetValue(Value(static_cast<uint32_t>(STACK_BASE_ADDR - 1)));
    lb_val->RegisterSetValue(Value(static_cast<uint32_t>(STACK_BASE_ADDR - 1)));
    sp_val->RegisterSetValue(Value(static_cast<uint32_t>(STACK_BASE_ADDR - 1)));

    heap_ptr = HEAP_START_ADDR;
}

void Memory::push(const Value& v) 
{
    this->setSP((this->getSP() + 1));

    if (this->getSP() >= STACK_LIMIT_ADDR) 
    {
        this->setSP((this->getSP() - 1 ));
        throw std::runtime_error("Stack Overflow!");
    }
    
    mem[this->getSP()] = v;
}

Value Memory::pop()
{
    if (this->getSP()  <= this->getGB() ) 
    {
        throw std::runtime_error("Stack Underflow!");
    }

    Value popped_value = mem[this->getSP()];

    this->setSP((this->getSP() - 1 ));
    
    return popped_value;
}

Value Memory::getWord(uint32_t address) const 
{
    if (address >= mem.size()) 
    {
        throw std::runtime_error("Memory access violation: Address out of bounds.");
    }
    return mem[address];
}

void Memory::setWord(uint32_t address, const Value& v) 
{
    if (address >= mem.size()) {
        throw std::runtime_error("Memory access violation: Address out of bounds.");
    }
    mem[address] = v;
}


uint32_t  Memory::allocate(uint32_t size)
{
        if(heap_ptr + size >= TOTAL_MEMORY_WORDS)
            throw std::runtime_error("Memory access violation: cannot allocate memory.");   
        
        uint32_t allocated_addr = heap_ptr;
        heap_ptr += size;

        return allocated_addr;
        
}