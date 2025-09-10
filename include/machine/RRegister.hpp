#ifndef RREGISTER_HPP
#define RREGISTER_HPP

#include "Register.hpp"

class RRegister : public Register
{
    private:
        
        int  index ;

    public:
        
        RRegister(int index);
        ~RRegister() ;

        int  getRegIndex() const ;

};

#endif