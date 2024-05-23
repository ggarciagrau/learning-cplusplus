#include <iostream>

using namespace std;

int main()
{

    int num1, num2, num3;

    cout << "Introduce three numbers> ";
    cin >> num1 >> num2 >> num3;

    if (num1 == num2 && num1 == num3)
    {
        cout << "The numbers are equal" << endl;
    }

    if (num1 > num2 && num1 > num3)
    {
        cout << num1 << " is greater than " << num2 << " and " << num3 << endl;
    }

    if (num2 > num1 && num2 > num3)
    {
        cout << num2 << " is greater than " << num1 << " and " << num3 << endl;
    }

    if (num3 > num1 && num3 > num2)
    {
        cout << num3 << " is greater than " << num1 << " and " << num2 << endl;
    }

    return 0;
}