#include <iostream>

using namespace std;

int main()
{

    float a, b;

    cout<<"Introduce the first numer> ";
    cin>>a;

    cout<<"Introduce the second number> ";
    cin>>b;

    // considerable deciamls
    cout.precision(13);
    // ::fixed;
    cout<<"The number is "<<a/b+1;

    return 0;
}