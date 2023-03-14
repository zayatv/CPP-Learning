#include <string>
#include <cstdint>
#include <iostream>

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
            return height * width;
        }
};

int main()
{
    //creating an object of derived class
    Rectangle r;
    //assigning values to the variables of the object through parent's the setter functions
    r.setHeight(3);
    r.setWidth(2);
    //calling a function of the object
    std::cout << r.getArea() << '\n';
    return 0;
}