#include <iostream>

using namespace std;

int main()
{

    int a, b, c, d;
    bool equalsA, equalsB, equalsC;

    cout << "Introduce three numbers> ";
    cin >> a >> b >> c;

    cout << "Introduce the fourth number> ";
    cin >> d;

    equalsA = d == a;
    equalsB = d == b;
    equalsC = d == c;

    if (equalsA)
    {
        cout << "Coincides with the first number" << endl;
    }

    if (equalsB)
    {
        cout << "Coincides with the second number" << endl;
    }

    if (equalsC)
    {
        cout << "Coincides with the third number" << endl;
    }

    if (equalsA == false && equalsB == false && equalsC == false)
    {
        cout << "There aren't number coincidences" << endl;
    }

    return 0;
}