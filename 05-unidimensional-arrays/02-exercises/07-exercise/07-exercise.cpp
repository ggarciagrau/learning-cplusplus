/**
 * Write a program that defines two arrays and then define a new matrix with all the data, then show the result in the standard output.
 */

#include <iostream>

using namespace std;

int main()
{

    char name[100], surname[100], result[200];
    int nameLength, surnameLength;

    cout << "Name length> ";
    cin >> nameLength;

    for (int i = 0; i < nameLength; i++)
    {
        cout << "Introduce name character " << i + 1 << "> ";
        cin >> name[i];
    }

    cout << "Surname length> ";
    cin >> surnameLength;

    for (int i = 0; i < surnameLength; i++)
    {
        cout << "Introduce surname character " << i + 1 << "> ";
        cin >> surname[i];
    }

    for (int i = 0; i < nameLength; i++)
    {
        result[i] = name[i];
    }

    result[nameLength] = ' ';

    for (int i = 0; i < surnameLength; i++)
    {
        result[nameLength + 1 + i] = surname[i];
    }

    for (int i = 0; i < nameLength + surnameLength + 1; i++)
    {
        cout << result[i];
    }

    cout << endl;
}
