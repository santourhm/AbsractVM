#ifndef BLE_HPP
#define BLE_HPP

#include "IInstruction.hpp"




class BLE  : public  IInstruction
{
    public :

        ~BLE() = default ;
        void execute(VMState * vms) override;
        void debug(VMState * vms) override;
};


#endif