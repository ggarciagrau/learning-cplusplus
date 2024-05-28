/**
 * Write a program that asks the user a number in the range [1-100]. The program should generate a random number in the same range [1-100] and inform the user if input is greater or lower than the generated number. The user should guess the number.
*/

#include <iostream>
#include <ctime>

using namespace std;

int main () {

    int input, guess, target;

    srand(time(0));
    target = rand() % 100 +1;

    do
    {
        cout << "Guess the target> ";
        cin >> guess;

        if (guess > target) {
            cout << "The target number is lower!" << endl;
        } else if (guess < target) {
            cout << "The target number is greater!" << endl;
        }
    } while (guess != target);

    cout << "Congratulations! You guessed the number!" << endl;

    return 0;
}