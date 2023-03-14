#include <string>
#include <cstdint>
#include <iostream>

//including our header file
#include "Inheritance.hh"

//base class
class Shape
{
    //making variables that can be accessed in derived classes
    protected:
        std::int32_t width;
        std::int32_t height;

    //public funtions to set width and height
    public:
        void setWidth(std::int32_t w)
        {
            width = w;
        }
        void setHeight(std::int32_t h)
        {
            height = h;
        }
};

//derived class with inheritance from 'Shape'
class Rectangle : public Shape
{
    //public function to get Area
    public:
        std::int32_t getArea()
        {
            return multiply(width, height);
        }
};

int main()
{
    //creating an object of derived class
    Rectangle r;

    //2 new variables with value of each of the mulitply methods from 'Polymorphism.cc' through the header file
    auto a = multiply(3, 2);
    auto b = multiply(6, 2, 5);

    //setting new values to the objects variables
    r.setHeight(a);
    r.setWidth(b);

    //printing function
    std::cout << r.getArea() << '\n';
    return 0;
}