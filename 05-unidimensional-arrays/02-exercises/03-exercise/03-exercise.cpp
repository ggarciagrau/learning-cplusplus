/**
 * Write a program that reads the stdin of a matrix of numbers and then print the numbers with its indexes 
*/

#include <iostream>

using namespace std;

int main () {

    int numbers[5];

    cout << "Number the numbers> ";
    cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4];

    for (int i = 0; i < 5; i++)
    {
        cout << "Number: " << numbers[i] << " | Index: " << i << endl;
    }

    return 0;
}