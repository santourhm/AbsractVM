#include "RRegister.hpp"




RRegister::RRegister(int idx) :                          
  Register("R" + std::to_string(idx), Value()), 
  index(idx) {}


RRegister::~RRegister() = default;

int RRegister::getRegIndex() const 
{ 
    return index; 
}