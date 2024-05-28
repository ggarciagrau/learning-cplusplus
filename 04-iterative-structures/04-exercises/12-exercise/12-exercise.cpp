/**
 * Write a program that calculates the value of: 1-2+3-4+5...+-n
 */

#include <iostream>

using namespace std;

int main()
{

    int result = 0, n;

    cout << "Introduce value> ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            result -= i;
        }
        else
        {
            result += i;
        }
    }

    cout << "Result: " << result << endl;

    return 0;
}