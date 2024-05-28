/**
 * Write a program tha calculates the serie of fibonacci: 1,1,2,3,5,8,13,...,n
*/

#include <iostream>

using namespace std;

int main () {

    int result = 1, previous = 0, aux, n;

    cout << "Introduce n> ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        aux = result;
        result += previous;
        previous = aux;
    }

    cout << "Result: " << result << endl;

    return 0;
}