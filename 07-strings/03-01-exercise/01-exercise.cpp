/**
 * Make a program that asks a user a string, then, verify the length, and if it's longer than 10 characters print it, otherwise do nothing
 */

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char string[100];

    cout << "Introduce a string> ";
    cin.getline(string, sizeof(string), '\n');

    if (strlen(string) > 10) {
        cout << string << endl;
    }

    return 0;
}