#include <iostream>

using namespace std;

main()
{
    int N, i, suma;

    cout << "Ingrese un numero: ";
    cin >> N;

    i = 1;
    suma = 0;

    while (i <= N)
    {
        suma += i;
        i += 1;
    }

    cout << "\nLa suma de todos los numeros desde 0 hasta " << N << " es: " << suma << "\n" <<endl;
}
