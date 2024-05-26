/**
 * Write a program that reads the tempeature every 4 hours during a period of 24h. It should read 6 temperatures.
 * Calculate the average temperature, the maximum and the minimum
 */

#include <iostream>

using namespace std;

int main()
{

    float input, total = 0, avg, max = -99999, min = 99999;

    for (int i = 1; i <= 6; i++)
    {
        cout << "Introduce a temperature> ";
        cin >> input;

        total += input;

        if (input > max)
        {
            max = input;
        }

        if (input < min)
        {
            cout << endl << "perico" << endl;
            min = input;
        }
    }

    avg = total / 6;

    cout << "Average temperature: " << avg << endl;
    cout << "Max. temperature: " << max << endl;
    cout << "Min. temperature: " << min << endl;

    return 0;
}