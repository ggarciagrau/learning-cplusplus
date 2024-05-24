#include <iostream>
#include <tgmath.h>

using namespace std;

int main()
{

    int option, num;

    cout << "=== Menu ===" << endl;
    cout << "1. Cube of a number" << endl;
    cout << "2. Even or odd number" << endl;
    cout << "3. Exit" << endl;
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Introduce a number> ";
        cin >> num;

        cout << "The cube of " << num << " is " << pow(num, 3) << endl;
        break;
    case 2:
        cout << "Introduce a number> ";
        cin >> num;

        if (num % 2 == 0)
        {
            cout << "The number is even" << endl;
        }
        else
        {
            cout << "The number is odd" << endl;
        }
        break;
    case 3:
        cout << "Exiting..." << endl;
        break;
    }

    return 0;
}