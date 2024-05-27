/**
 * Write a program that reads integer values until a value between the range the [20-30] or 0 is introduced. The program should return the sum of the values greater than 0.
 */

#include <iostream>

using namespace std;

int main()
{

    int sum = 0, input;

    do
    {

        cout << "Introduce a number> ";
        cin >> input;

        if (input > 0)
        {
            sum += input;
        }

    } while (
        input != 0 && !(input >= 20 && input <= 30));

    cout << "Sum: " << sum << endl;

    return 0;
}