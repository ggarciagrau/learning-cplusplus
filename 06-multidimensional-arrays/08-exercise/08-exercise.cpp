/**
 * Develop a program that calculates the product of two 3x3 square matrices
 */

#include <iostream>

using namespace std;

int main()
{
    int a[3][3] = {{2, 0, 1}, {3, 0, 0}, {5, 1, 1}};
    int b[3][3] = {{1, 0, 1}, {1, 2, 1}, {1, 1, 0}};
    int result[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}