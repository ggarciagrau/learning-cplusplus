/**
 * Write a program that calculates the prime factorial decomposition of an integer number
 * 20 = 2*5*5
 */

#include <iostream>

using namespace std;

int main()
{

    int n;

    cout << "Introduce n> ";
    cin >> n;

    cout << n << " = ";
    for (int i = 2; n > 1; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";

            if (n / i != 1)
            {
                cout << "* ";
            }

            n /= i;
        }
    }

    cout << endl;

    return 0;
}