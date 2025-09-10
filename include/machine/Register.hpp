#ifndef  REGISTER_HPP
#define  REGISTER_HPP
#include <string>
#include <memory>
#include <vector>
#include <variant>
#include "VMtypes.hpp"
#include "Operand.hpp"



class Register  
{
    private:
        
        std::string     name    ;
        VOp_t   value   ;

    public:

        Register(const std::string& n, VOp_t v = 0);
        ~Register() = default ;

        void    RegisterSetValue(VOp_t v)         ;
        VOp_t   RegisterGetValue()        const   ;
        

};



#endif