#include <iostream>

using namespace std;

int main()
{

    char t;

    cout << "Introduce a character> ";
    cin >> t;

    switch (t)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "It's a lowercase vowel" << endl;
        break;

    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "It's an uppercase vowel" << endl;
        break;

    default:
        cout << "It's not a vowel" << endl;
        break;
    }

    return 0;
}