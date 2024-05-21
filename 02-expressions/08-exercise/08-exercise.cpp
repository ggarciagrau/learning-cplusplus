#include <iostream>
#include <tgmath.h>

using namespace std;

int main()
{

    int h, c1, c2;

    cout << "Introduce the length of the first cathetus> ";
    cin >> c1;

    cout << "Introduce the length of the second cathetus> ";
    cin >> c2;

    h = sqrt(pow(c1, 2) + pow(c2, 2));

    cout << "The hypotenuse " << h << endl;

    return 0;
}