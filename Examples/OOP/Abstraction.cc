#include <string>
#include <cstdint>
#include <iostream>

class AbstractionClass
{
    private:
        //creating to public integers
        std::int32_t a, b;
    public:
        //making a public function to assign values to the private variables above
        void setNumbers(std::int32_t x, std::int32_t y)
        {
            a = x;
            b = y;
        }

        //making a public function to multiply both variables and printing them to the console
        void multiply()
        {
            std::cout << "a * b = " << a * b << '\n';
        }
};

int main()
{
    //creating an object of the class
    AbstractionClass obj;

    //calling both functions of the object
    obj.setNumbers(5, 9);
    obj.multiply();
    return 0;
}