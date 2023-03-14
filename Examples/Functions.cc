#include <iostream>
#include <string>
#include <cstdint>

//creating a function to multiply two integers
//takes two int32's as input
//function returns a 32 bit integer
std::int32_t multiply2(std::int32_t a, std::int32_t b)
{
    return a * b;
}

//creating a function to multiply two predetermined integers
//function returns a 32 bit integer
//testing the previous function
std::int32_t multiply()
{
    //assigning 2 intgers
    std::int32_t a = 7;
    std::int32_t b = 2;

    //returning the previous function with a and b as input
    return multiply2(a, b);
}

int main()
{
    //creating new variable with muliply function as value
    std::int32_t multiplied = multiply();

    //printing multiplied value in console
    std::cout << multiplied << '\n';
    return 0;
}