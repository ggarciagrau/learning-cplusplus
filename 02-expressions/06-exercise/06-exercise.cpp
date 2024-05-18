// Average

#include<iostream>

using namespace std;

int main () {

    float grade1, grade2, grade3, average;

    cout << "Introduce first grade> ";
    cin >> grade1;

    cout << "Introduce second grade> ";
    cin >> grade2;

    cout << "Introduce third grade> ";
    cin >> grade3;

    average = (grade1 + grade2 + grade3) / 3;

    cout << "Average: " << average;
    return 0;
}