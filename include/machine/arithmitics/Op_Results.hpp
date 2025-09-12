// FILE: Op_Results.hpp

#ifndef OP_RESULTS_HPP
#define OP_RESULTS_HPP

#include "Value.hpp" 

struct CC
{
    unsigned int EQ : 1;
    unsigned int GT : 1;
    unsigned int GE : 1;
    unsigned int OV : 1;
    unsigned int NE : 1;
    unsigned int LT : 1;
    unsigned int LE : 1;
    unsigned int _unused : 1;
    
};

struct Op_Results
{
    Value val;
    CC cc;
};

#endif