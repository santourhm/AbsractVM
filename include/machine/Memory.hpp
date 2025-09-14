#ifndef     MEMORY_HPP
#define     MEMORY_HPP
#include    <array>
#include    <string>
#include    <vector>
#include    <inttypes.h>
//#include   "includes.hpp"
#include   <variant>
#include <memory>
#include "Value.hpp"

class Memory
{
    private:

        size_t   _size                          ;
        std::vector<std::unique_ptr<Value>> mem ;

    public:
        
        Memory(size_t   _size) ;
        ~Memory() = default;
        
};





#endif