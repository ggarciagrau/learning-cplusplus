#include<iostream>

using namespace std;

int main () {

    int num1, num2, den1, den2;

    cout<<"Introduce the first numerator number> ";
    cin>>num1;

    cout<<"Introduce the second numerator number> ";
    cin>>num2;

    cout<<"Introduce the first denominator number> ";
    cin>>den1;

    cout<<"Introduce the second denominator number> ";
    cin>>den2;

    cout<<"Result: "<<(num1 + num2) / (den1 + den2);

    return 0;
}