#include <iostream>
#include <curses.h>

using namespace std;

int main()
{

    int i = 1;

    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }

    // Prevents CLI auto-closing when the execution finishes
    getch();

    return 0;
}