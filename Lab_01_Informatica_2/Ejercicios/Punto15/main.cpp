#include <iostream>

using namespace std;

main()
{
    int i, numero, suma;

    i = 1;
    suma = 0;

    while (numero != 0)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        cout << "\n" <<endl;
        suma += numero;
    }

    cout << "\nEl resultado de la suma es: " << suma << "\n" <<endl;
}
