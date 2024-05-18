#include <iostream>

using namespace std;

int main()
{

    float num1, numFrNum, numFrDen, den1, denFrNum, denFrDen, result;

    cout << "Introduce first numerator number> ";
    cin >> num1;

    cout << "Introduce second numerator numerator> ";
    cin >> numFrNum;
    cout << "Introduce second numerator denominator> ";
    cin >> numFrDen;

    cout << "Introduce first denominator number> ";
    cin >> den1;

    cout << "Introduce second denominator numerator> ";
    cin >> denFrNum;
    cout << "Introduce second denominator denominator> ";
    cin >> denFrDen;

    result = (num1 + (numFrNum / numFrDen)) / (den1 + (denFrNum / denFrDen));

    cout.precision(2);
    cout << "Result: " << result;

    return 0;
}