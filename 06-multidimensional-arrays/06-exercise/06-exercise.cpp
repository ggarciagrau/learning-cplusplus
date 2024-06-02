/**
 * Write a program that calculates the sum of two 3x3 square matrices
 */

#include <iostream>

using namespace std;

int main()
{

    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, b[3][3] = {{323, 5483, 23}, {29, 39, 30}, {342, 983, 235}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] + b[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}