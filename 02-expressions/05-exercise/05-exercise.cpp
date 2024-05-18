// Swap variable values

#include<iostream>

using namespace std;

int main () {

    int a, b, aux;

    cout << "Introduce value a> ";
    cin >> a;

    cout << "Introduce value b> ";
    cin >> b;

    aux = a;
    a = b;
    b = aux;

    cout << "A value: " << a << " | B value: " << b << endl; 

    return 0;
}