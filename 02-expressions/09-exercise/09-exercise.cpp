#include<iostream>
#include<tgmath.h>

using namespace std;

int main () {

    float x, y, result;

    cout << "Introduce x number> ";
    cin >> x;

    cout << "Introduce y number> ";
    cin >> y;

    result = sqrt(x) / (pow(y, 2) - 1);

    cout << "Result: " << result << endl;

    return 0;
}