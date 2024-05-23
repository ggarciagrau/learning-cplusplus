#include <iostream>

using namespace std;

int main()
{

    int num, data = 5;

    cout << "Introduce a number> ";
    cin >> num;

    if (num == data)
    {
        cout << "The number is equal to data" << endl;
    }
    else
    {
        cout << "The number is different to data" << endl;
    }

    return 0;
}