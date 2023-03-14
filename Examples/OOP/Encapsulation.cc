#include <string>
#include <cstdint>
#include <iostream>

class Person
{
    private:
        //creating 3 private variables
        std::string first_name;
        std::string surname;
        std::int32_t age;

    public:
        //Setter
        //set the variables values
        void setFirstName(std::string first_name)
        {
            this->first_name = first_name;
        }
        void setSurname(std::string surname)
        {
            this->surname = surname;
        }
        void setAge(std::int32_t age)
        {
            this->age = age;
        }

        //Getter
        //return the variables values
        std::string getFirstName()
        {
            return first_name;
        }
        std::string getSurname()
        {
            return surname;
        }
        std::int32_t getAge()
        {
            return age;
        }

        //Print
        void printDetails()
        {
            std::cout << 
            "First Name: " << getFirstName() << '\n' <<
            "Surname: " << getSurname() << '\n' <<
            "Age: " << getAge() << '\n';
        }
};

int main()
{
    //creating an object of 'Person'
    Person p1;

    //assigning values to the variables of the object through the setter functions
    p1.setFirstName("Max");
    p1.setSurname("Mustermann");
    p1.setAge(23);

    //calling a function of the object
    p1.printDetails();

    return 0;
}