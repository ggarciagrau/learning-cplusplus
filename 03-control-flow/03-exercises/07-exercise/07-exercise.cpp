#include <iostream>

using namespace std;

int main () {

    int age;

    cout << "Introduce your age> ";
    cin >> age;

    if (age >= 18 && age <= 25) {
        cout << "Your age is accepted" << endl;
    } else {
        cout << "Your age is not accepted" << endl;
    }

    return 0;
}