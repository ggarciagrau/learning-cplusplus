/**
 * Write a program that defines an array of numbers and calculate the multiplication of its numbers
*/

#include<iostream>

using namespace std;

int main () {

    int numbers[] = {3, 5, 7 ,7, 9, 23}, result = 1;

    for (int i = 0; i < 6; i++)
    {
        result *= numbers[i];
    }

    cout << "Result: " << result << endl;
}