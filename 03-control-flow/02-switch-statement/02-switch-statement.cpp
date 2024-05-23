#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Introduce a number> ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Your number is 1" << endl;
        break;
    case 2:
        cout << "Your number is 2" << endl;
        break;
    case 3:
        cout << "Your number is 3" << endl;
        break;
    default:
        cout << "Your number is not recognized" << endl;
        break;
    }

    return 0;
}