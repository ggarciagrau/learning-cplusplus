#include <iostream>

using namespace std;

int main () {

    int num;

    cout << "Introduce a number> ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is even" << endl;
    } else {
        cout << num << " is odd" << endl;
    }

    return 0;
}