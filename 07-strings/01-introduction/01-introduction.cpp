#include <iostream>

using namespace std;

int main()
{
    char name[] = "Roberto";
    char surname[] = {'M', 'a', 'r', 't', 'i', 'n', 'e', 'z', '\0'};
    char nameAndSurname[100];
    char nameAndSurname2[100];
    char nameAndSurname3[100];

    cout << name << endl;
    cout << surname << endl;

    // cout << "Name and surname A> ";
    // The surname is not saved in thee variable because when cin finds a whitespace stops the read
    // cin >> nameAndSurname;
    // cout << "A) Name and surname: " << nameAndSurname << endl;

    // cout << "Name and surname B> ";
    // fgets(nameAndSurname2, sizeof(nameAndSurname2), stdin);
    // cout << "B) Name and surname: " << nameAndSurname2 << endl;

    // cout << "Name and surname C> ";
    // cin.getline(nameAndSurname3, sizeof(nameAndSurname3));
    // cin.getline(nameAndSurname3, sizeof(nameAndSurname3), '\n');
    // cout << "C) Name and surname: " << nameAndSurname3 << endl;

    return 0;
}