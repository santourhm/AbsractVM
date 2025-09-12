#include "Value.hpp"
#include <iostream>
#include <cmath>

#include "Op_Results.hpp"


Value::Value()
{
    this->type = TypeTag::UNDEFINED;
}

Value::Value(int32_t val)
{
    this->type = TypeTag::INTEGER;
    this->data = val;
}

Value::Value(float val)
{
    this->type = TypeTag::FLOAT;
    this->data = val;
}


Value::Value(uint32_t val)
{
    this->type = TypeTag::ADDRESS;
    this->data = val;
}

Value::Value(std::string val)
{
    this->type = TypeTag::STRING;
    this->data = val;
}

TypeTag Value::getType() const
{
    return this->type;
}

template<typename IntOp, typename FloatOp>
static Op_Results arithmeticOp(const Value& lhs, const Value& rhs,
                               IntOp intOp,
                               FloatOp floatOp)
{
    Op_Results result;

    if (lhs.getType() == TypeTag::ADDRESS || rhs.getType() == TypeTag::ADDRESS)
        throw std::runtime_error(" : Cannot operate on ADDRESS");

    if (lhs.getType() == TypeTag::UNDEFINED || rhs.getType() == TypeTag::UNDEFINED)
        throw std::runtime_error(" : Cannot operate on UNDEFINED value");

    if (lhs.getType() == TypeTag::FLOAT || rhs.getType() == TypeTag::FLOAT)
    {

        float lhs_f = (lhs.getType() == TypeTag::FLOAT) ? lhs.getFloat() : static_cast<float>(lhs.getInt());
        float rhs_f = (rhs.getType() == TypeTag::FLOAT) ? rhs.getFloat() : static_cast<float>(rhs.getInt());

        float fRes = floatOp(lhs_f, rhs_f);
        result.val = Value(fRes);

        result.cc.OV = std::isinf(fRes) ? 1 : 0;
        result.cc.EQ = (fRes == 0.0f);
        result.cc.NE = (fRes != 0.0f);
        result.cc.GT = (fRes > 0.0f);
        result.cc.LT = (fRes < 0.0f);
        result.cc.GE = (fRes >= 0.0f);
        result.cc.LE = (fRes <= 0.0f);
    }
    else if (lhs.getType() == TypeTag::INTEGER && rhs.getType() == TypeTag::INTEGER)
    {
        int32_t lhs_i = lhs.getInt();
        int32_t rhs_i = rhs.getInt();
        int32_t iRes = intOp(lhs_i, rhs_i);
        result.val = Value(iRes);

        result.cc.OV = 0;

        result.cc.EQ = (iRes == 0);
        result.cc.NE = (iRes != 0);
        result.cc.GT = (iRes > 0);
        result.cc.LT = (iRes < 0);
        result.cc.GE = (iRes >= 0);
        result.cc.LE = (iRes <= 0);
    }
    else {
        throw std::runtime_error(" : Unsupported types for arithmetic operation");
    }

    return result;
}


Op_Results Value::operator+(const Value& rhs) const {
    Op_Results result = arithmeticOp(*this, rhs,
        [](int32_t a, int32_t b){ return a + b; },
        [](float a, float b){ return a + b; });

    if (result.val.getType() == TypeTag::INTEGER) {
        int32_t lhs_i = this->getInt();
        int32_t rhs_i = rhs.getInt();
        int32_t res_i = result.val.getInt();
        if ((lhs_i > 0 && rhs_i > 0 && res_i < 0) || (lhs_i < 0 && rhs_i < 0 && res_i > 0)) {
            result.cc.OV = 1;
        }
    }
    return result;
}

Op_Results Value::operator-(const Value& rhs) const {
    return arithmeticOp(*this, rhs,
        [](int32_t a, int32_t b){ return a - b; },
        [](float a, float b){ return a - b; });
}

Op_Results Value::operator*(const Value& rhs) const {
    return arithmeticOp(*this, rhs,
        [](int32_t a, int32_t b){ return a * b; },
        [](float a, float b){ return a * b; });
}

Op_Results Value::operator/(const Value& rhs) const {
    return arithmeticOp(*this, rhs,
        [](int32_t a, int32_t b){
            if (b == 0) throw std::runtime_error(" : Division by zero");
            return a / b;
        },
        [](float a, float b){
            if (b == 0.0f) throw std::runtime_error(" : Division by zero");
            return a / b;
        });
}

Op_Results Value::operator%(const Value& rhs) const {
    return arithmeticOp(*this, rhs,
        [](int32_t a, int32_t b){
            if (b == 0) throw std::runtime_error(" : Modulo by zero");
            return a % b;
        },
       
        [](float, float) -> float { 
            throw std::runtime_error(" : Modulo not defined for floats");
        });
}

int32_t Value::getInt() const { return std::get<int32_t>(data); }

float Value::getFloat() const { return std::get<float>(data); }

uint32_t Value::getAddr() const { return std::get<uint32_t>(data); }

std::string Value::getStr() const { return std::get<std::string>(data); }
