#include <iostream>

using namespace std;

int main()
{

    char t;

    cout << "Introduce a lowercase vowel> ";
    cin >> t;

    if (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u')
    {
        cout << "The characters is a lowercase vowel" << endl;
    }
    else
    {
        cout << "The character is not a lowercase vowel" << endl;
    }

    return 0;
}