/**
 * Read the input numbers from the stdin until 0 is introduced. In this moment, the program must finish and display the number of introduced values greater than 0.
 */

#include <iostream>

using namespace std;

int main()
{

    int num, count = 0;

    do
    {
        cout << "Introduce a number> ";
        cin >> num;

        if (num > 0)
            count++;
    } while (num != 0);

    cout << "Number of introduced numbers gt 0: " << count << endl;

    return 0;
}