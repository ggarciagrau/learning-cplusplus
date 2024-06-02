/**
 * Develop a program that determines if a matrix is symmetric or not
 */

#include <iostream>

using namespace std;

int main()
{

    int rows, columns;

    cout << "Rows> ";
    cin >> rows;

    cout << "Columns> ";
    cin >> columns;

    if (rows != columns)
    {
        cout << "The number of rows and columns is different, the matrix cannot be symmetric" << endl;
        return 0;
    }

    int matrix[rows][columns], transposedMatrix[rows][columns];
    bool isSymmetric = true;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "[" << i << "][" << j << "]> ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (transposedMatrix[i][j] != matrix[i][j])
            {
                isSymmetric = false;
                break;
            }
        }

        if (isSymmetric == false)
        {
            break;
        }
    }

    if (isSymmetric)
    {
        cout << "The matrix is symmetric" << endl;
    } else {
        cout << "The matrix is not symmetric" << endl;
    }
    return 0;
}