#include <iostream>
#include <tgmath.h>

using namespace std;

int main()
{

    float a, b, c, positiveResult, negativeResult, sqrtOperation, denominatorOperation;

    cout << "Introduce a value> ";
    cin >> a;

    cout << "Introduce b value> ";
    cin >> b;

    cout << "Introduce c value> ";
    cin >> c;

    sqrtOperation = sqrt(pow(b, 2) - 4 * a * c);
    denominatorOperation = 2 * a;

    positiveResult = (-b + sqrtOperation) / denominatorOperation;
    negativeResult = (-b - sqrtOperation) / denominatorOperation;

    cout << "Positive result: " << positiveResult << endl;
    cout << "Negative result: " << negativeResult << endl;

    return 0;
}