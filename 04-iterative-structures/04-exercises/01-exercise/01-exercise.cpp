/**
 * Ask a number between 1 and 10 through stdin and display the multiplication table in the stdout
 */

#include <iostream>

using namespace std;

int main()
{

    int num;

    do
    {
        cout << "Introduce a number between 1 and 10> ";
        cin >> num;

    } while (num < 1 || num > 10);

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    return 0;
}