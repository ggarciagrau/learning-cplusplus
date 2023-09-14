#include <iostream>

using namespace std;

int main()
{

    float price, priceWithIva, iva;

    iva = 21;

    cout << "Introduce the base price> ";
    cin >> price;

    priceWithIva = price * (iva / 100) + price;

    cout << "The price with IVA is " << priceWithIva << endl;

    return 0;
}