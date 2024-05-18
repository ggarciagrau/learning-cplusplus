#include <iostream>

using namespace std;

int main()
{

    float a, b, c, d, result;

    cout << "Introduce number a> ";
    cin >> a;

    cout << "Introduce number b> ";
    cin >> b;

    cout << "Introduce number c> ";
    cin >> c;

    cout << "Introduce number d> ";
    cin >> d;

    result = a + (b / (c - d));

    cout.precision(2);
    cout << "Result: " << result << endl;

    return 0;
}