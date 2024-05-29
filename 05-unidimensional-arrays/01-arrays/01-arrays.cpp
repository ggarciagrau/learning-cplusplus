#include <iostream>

int main()
{
    // Declare an empty array
    int numbers[10];

    // Declare and intialice an array wirh values
    char name[] = {'R', 'o', 'b', 'e', 'r', 't', 'o'};

    // Read values
    numbers[4];
    numbers[10];

    std::cout << name[0] << std::endl;
    std::cout << name[6] << std::endl;
    std::cout << name[7] << std::endl;
    std::cout << name[-1] << std::endl;

    // Set values
    numbers[0] = 25;
    name[0] = 'r';

    return 0;
}