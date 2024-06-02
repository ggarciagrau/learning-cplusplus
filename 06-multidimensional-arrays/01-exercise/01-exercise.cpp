/**
 * Write a program to populate a matrix asking a user the number of rows and columns, then show the matrix
 */

#include <iostream>

using namespace std;

int main()
{
    int numbers[100][100], rows, columns;

    cout << "Rows> ";
    cin >> rows;

    cout << "Columns> ";
    cin >> columns;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Introduce the value for [" << i << "][" << j << "]> ";
            cin >> numbers[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << numbers[i][j] << " ";
        }

        cout << endl;
    }
}