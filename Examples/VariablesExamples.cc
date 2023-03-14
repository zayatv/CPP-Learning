#include <cstdint>
#include <string>
#include <iostream>

int main()
{
    //assigning variable of type 'int32_t' with a value of 10
    std::int32_t my_int = 10;

    //assigning variable of type 'int32_t' with a value of 10
    auto my_int2 = std::int32_t{10};

    //printing both variables to the console
    std::cout << my_int << my_int2 << '\n';

    return 0;
}