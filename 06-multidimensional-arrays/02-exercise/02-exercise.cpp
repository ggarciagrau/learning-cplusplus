/**
 * Develop a program that defines a 3x3 matrix and write a loop to print the main diagonal
 */

#include <iostream>

using namespace std;

int main()
{

    int numbers[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        cout << numbers[i][i] << " ";
    }

    cout << endl;

    return 0;
}