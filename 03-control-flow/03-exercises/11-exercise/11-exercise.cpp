#include <iostream>

using namespace std;

int main()
{

    int balance = 1000, operation, quantity;

    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Exit" << endl;

    cout << "Operation> ";
    cin >> operation;

    if (operation == 1)
    {
        cout << "Deposit amount> ";
        cin >> quantity;
        cout << "Your new balance " << balance + quantity << endl;
    }
    else if (operation == 2)
    {
        cout << "Withdraw amount> ";
        cin >> quantity;
        cout << "Your new balance " << balance - quantity << endl;
    }
    else if (operation == 3)
    {
        cout << "Exiting..." << endl;
    }
    else
    {
        cout << "Operation not recognized" << endl;
    }

    return 0;
}