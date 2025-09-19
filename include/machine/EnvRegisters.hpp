#ifndef     ENVREGISTERS_HPP
#define     ENVREGISTERS_HPP

#include "Register.hpp"
#include <memory>

#define  NUMBER_MAX_GENPORPSE_REG  (16)


class EnvRegisters
{
    private:

        std::vector<std::unique_ptr<Register>> RRegisters;
        std::unique_ptr<Register> GB ;   
        std::unique_ptr<Register> LB ;   
        std::unique_ptr<Register> SP ;   
        std::unique_ptr<Register> PC ;   

    public:

        EnvRegisters();
        ~EnvRegisters();


        Register *  getR(int i)  ;
        Register *  getGB(void)  ;
        Register *  getLB()  ;
        Register *  getSP()  ;
        Register *  getPC()  ;
        CC       *  get_sCC();
        void  set_sCC(CC CC_state);
};




#endif