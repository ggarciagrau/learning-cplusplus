/**
 * Write a program that defines an array of numbers and print the numbers in reverse order (from the end to the beggining)
 */

#include <iostream>

using namespace std;

int main()
{

    int numbers[] = {3,
                     7,
                     9,
                     22,
                     324434,
                     -94};

    for (int i = 5; i >= 0; i--)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}