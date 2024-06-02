/**
 * Write a program that ask an user the number of rows and columns, populate a matrix with random numbers and copy the values in another matrix, then print the values of the copy
 */

#include <iostream>

using namespace std;

int main()
{

    srand(time(0));
    int rows, columns;

    cout << "Rows> ";
    cin >> rows;

    cout << "Columns> ";
    cin >> columns;

    int numbers[rows][columns], copy[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            numbers[i][j] = rand() % 100 + 1;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            copy[i][j] = numbers[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << copy[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}