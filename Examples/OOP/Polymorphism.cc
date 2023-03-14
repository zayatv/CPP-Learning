#include <string>
#include <cstdint>
#include <iostream>

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

int main()
{
    //assigning 3 integers
    std::int32_t a = 5, b = 1, c = 2;

    //2 new variables with value of each of the mulitply methods
    auto m1 = multiply(a, b);
    auto m2 = multiply(a, b, c);

    //printing out variables 'm1' and 'm2'
    std::cout << m1 << '\n' << m2 << '\n';

    return 0;
}