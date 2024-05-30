/**
 * Write a program that defines a numeric array and calculate if there is one element that represents the sum of the rest of the numbers
 */

#include <iostream>

using namespace std;

int main()
{

    int numbers[100], n, greatest = 0, sum = 0;

    cout << "Define the number of elements of the array> ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Introduce the " << i + 1 << " number> ";
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];

        if (numbers[i] > greatest)
        {
            greatest = numbers[i];
        }
    }

    if (greatest == sum - greatest)
    {
        cout << greatest << " is the sum of the rest of the elements" << endl;
    }
    return 0;
}