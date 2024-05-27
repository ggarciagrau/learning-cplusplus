/**
 * Write a program that calculates the value of:  1 + 2 + 2 + ... + n
*/

#include <iostream>

using namespace std;

int main () {

    int result = 0, num;

    cout << "Introduce the target value> ";
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        result += i;
    }

    cout << "Result: " << result << endl;

    return 0;
}