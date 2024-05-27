/**
 * Write a program that calculates x^y, where x and y are positive numbers without using a library method.
 */

#include <iostream>

using namespace std;

int main()
{

    int result = 1, x, y;

    cout << "Introduce the base value> ";
    cin >> x;

    cout << "Introduce the exponent value> ";
    cin >> y;

    for (int i = 1; i <= y; i++)
    {
        result *= x;
    }

    cout << "Result: " << result << endl;

    return 0;
}