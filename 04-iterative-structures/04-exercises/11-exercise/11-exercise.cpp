/**
 * Write a program that calculates the value of: 2^1 + 2^2 + 2^3 + ... + 2^n
 */

#include <iostream>
#include <tgmath.h>

using namespace std;

int main()
{

    int result = 0, n;

    cout << "Introduce a number> ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        result += pow(2, i);
    }

    cout << "Result: " << result << endl;

    return 0;
}