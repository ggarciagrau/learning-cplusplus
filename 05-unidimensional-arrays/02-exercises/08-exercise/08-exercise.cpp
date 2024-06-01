/**
 * Develop a program that asks 5 numbers in an array and then multiply them for 2 in a new array
*/

#include <iostream>

using namespace std;

int main () {

    int numbers[5], numbersFor2[5];

    cout << "Introduce 5 numbers> ";
    cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4];

    numbersFor2[0] = numbers[0] * 2;
    numbersFor2[1] = numbers[1] * 2;
    numbersFor2[2] = numbers[2] * 2;
    numbersFor2[3] = numbers[3] * 2;
    numbersFor2[4] = numbers[4] * 2;

    for (int i = 0; i < 5; i++)
    {
        cout << i << " = " << numbersFor2[i] << endl;
    }

    return 0;
}