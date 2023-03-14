#include <vector>
#include <cstdint>
#include <iostream>

int main()
{
    //creating new vector and assigning values 1, 2 and 3 to it
    auto my_vector = std::vector<std::int32_t>{1, 2, 3};

    //getting vector's value at index 0
    my_vector.at(0);

    //adding value 4 to the vector at the end
    my_vector.push_back(4);

    //printing value at index 0 of vector and the vector's size
    std::cout << my_vector.at(0) << ',' << my_vector.size() << '\n';

    //deleting the first element of the vector
    my_vector.erase(std::next(my_vector.begin(), 0));

    //printing value at index 0 of vector and the vector's size
    std::cout << my_vector.at(0) << ',' <<  my_vector.size() << '\n';

    return 0;
}