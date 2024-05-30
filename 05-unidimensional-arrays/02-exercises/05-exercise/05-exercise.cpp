/**
 * Develop a program that reads the stdin of a number array and detemine which is the greatest value
 */

#include <iostream>

using namespace std;

int main()
{

    int numbers[5], greatest = 0;

    cout << "Introduce the numbers> ";
    cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4];

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] > greatest)
        {
            greatest = numbers[i];
        }
    }

    cout << "Greatest: " << greatest << endl;

    return 0;
}