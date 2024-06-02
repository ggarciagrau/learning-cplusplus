/**
 * Write a program that asks the user to populate a 2x2 matrix and then copy the content onto another matrix
 */

#include <iostream>

using namespace std;

int main()
{

    int numbers[2][2] = {{1, 2}, {3, 4}}, copy[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            copy[i][j] = numbers[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << copy[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}