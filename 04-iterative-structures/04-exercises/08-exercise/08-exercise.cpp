/**
 * Write a program that calculates the value of: 1+3+5+...+2n-1
 * Sum of the n first odd numbers
 */

#include <iostream>

using namespace std;

int main()
{

    int result = 0, n;

    cout << "Introduce the value of n> ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        result += 2 * i - 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}