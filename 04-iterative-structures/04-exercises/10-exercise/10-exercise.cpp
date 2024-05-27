/**
 * Write a program that calculates the vaule of: 1!+2!+3!+...+n!
 */

#include <iostream>

using namespace std;

int main()
{

    int result = 0, factorial = 1, n;

    cout << "Introduce n> ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        factorial *= i;

        result += factorial;
    }

    cout << "Result: " << result << endl;

    return 0;
}