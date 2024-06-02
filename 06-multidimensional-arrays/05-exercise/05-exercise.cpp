/**
 * Read a 3x3 matrix and generate the transposed matrix
 */

#include <iostream>

using namespace std;

int main()
{

    int numbers[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, transposed[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transposed[j][i] = numbers[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}