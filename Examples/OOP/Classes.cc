#include <string>
#include <cstdint>
#include <iostream>

//creating a class named 'Person'
class Person
{
    //creating public variables and functions
    public:
        //assigning variables without a value
        std::string first_name;
        std::string surname;
        std::int32_t age;

        //method to print the value of the variables
        void printDetails()
        {
            std::cout << 
            "First Name: " << first_name << '\n' <<
            "Surname: " << surname << '\n' <<
            "Age: " << age << '\n';
        }
};

int main()
{
    //creating an object of 'Person'
    Person p1;

    //assigning values to the variables of the object
    p1.first_name = "Max";
    p1.surname = "Mustermann";
    p1.age = 23;

    //calling a function of the object
    p1.printDetails();

    return 0;
}
