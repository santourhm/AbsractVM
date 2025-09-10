#ifndef OPERAND_HPP
#define OPERAND_HPP


#include <string>
#include <variant>

using VOp_t = std::variant<int8_t, int16_t, int32_t, float, std::string, std::nullptr_t>;

class Operand
{
    
    public:
        
        virtual ~Operand() = default; 
        virtual VOp_t getOperandValue() const = 0;

};



#endif