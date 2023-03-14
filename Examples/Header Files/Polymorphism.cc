#include <string>
#include <cstdint>
#include <iostream>

//including our header file
#include "Inheritance.hh"

//multiply function taking in 2 parameters and mulitplies them
std::int32_t multiply(std::int32_t a, std::int32_t b)
{
    return a * b;
}

//multiply function taking in 3 parameters and mulitplies them
//FUNCTION OVERLOADING!
std::int32_t multiply(std::int32_t a, std::int32_t b, std::int32_t c)
{
    return a * b * c;
}