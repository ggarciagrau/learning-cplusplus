/**
 * Write a program that calculates the value of: 1*2*3*...*n
 * Factorial of a number
*/

#include <iostream>

using namespace std;

int main () {

    int result =  1, n;

    cout << "Introduce a number> ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    cout << "Result: " << result << endl;

    return 0;
}