#ifndef     MEMORY_HPP
#define     MEMORY_HPP
#include    <array>
#include    <string>
#include    <vector>
#include    <inttypes.h>
//#include   "includes.hpp"
#include   <variant>
#include <memory>

using Vmem_t = std::variant<int8_t,int16_t,int32_t, float, std::string >;

class Memory
{
    private:

        size_t   _size                           ;
        std::vector<std::unique_ptr<Vmem_t>> mem ;

    public:
        
        Memory(size_t   _size) ;
        ~Memory() = default;

        //virtual int allocate(size_t size) = 0 ; 
};





#endif