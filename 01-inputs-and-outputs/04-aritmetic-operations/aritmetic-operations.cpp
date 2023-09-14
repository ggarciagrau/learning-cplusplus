#include <iostream>

using namespace std;

int main()
{

    int numberA, numberB;
    char operation;

    cout << "Introduce the first number> ";
    cin >> numberA;

    cout << "Introduce the second number> ";
    cin >> numberB;

    int sumResult, differenceResult, multiplicationResult;
    float divisionResult;

    sumResult = numberA + numberB;
    differenceResult = numberA - numberB;
    multiplicationResult = numberA * numberB;
    divisionResult = numberA / numberB;

    cout << "Sum: " << numberA << " + " << numberB << " = " <<  sumResult << endl;
    cout << "Difference: " << numberA << " - " << numberB << " = " << differenceResult << endl;
    cout << "Multiplication: " << numberA << " * " << numberB << " = " << multiplicationResult << endl;
    cout << "Division: " << numberA << " / " << numberB << " = " << divisionResult << endl;

    return 0;
}