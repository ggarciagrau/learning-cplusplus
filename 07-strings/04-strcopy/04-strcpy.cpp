/**
 * Copy the contents from one string to another - strcpy function
 */

#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    char a[] = "Hello";
    char b[sizeof(a)];

    strcpy(b, a);

    cout << b << endl;

    return 0;
}