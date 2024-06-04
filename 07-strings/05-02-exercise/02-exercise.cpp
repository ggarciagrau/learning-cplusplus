/**
 * Ask the user a string, store it in an array and copy the contents to another array
*/

#include <iostream>
#include <string.h>

using namespace std;

int main ()
{

    char string[100];
    char backup[sizeof(string)];

    cout << "String> ";
    cin.getline(string, sizeof(string), '\n');

    strcpy(backup, string);

    cout << backup << endl;

    return 0;
}