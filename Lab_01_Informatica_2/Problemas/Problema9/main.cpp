#include <iostream>

using namespace std;

main()
{
    int N, suma, i, n, j, l, m;
    cout << "Ingrese un numero: ";
    cin >> N;

    i = 1;
    suma = 0;

    if (N < 10)
    {
        j = N;

        while (i < N)
        {
            suma *= j;
            i += 1;
        }
        cout << "El resultado de la suma es: " << suma <<endl;
        cout << "\n" <<endl;
    }
    else
    {
        n = 10;
        j = 1;

        while (N > n*10)
        {
            n *= 10;
            j += 1;
        }

        n = 10;

        while (i <= j)
        {
            m = 1;
            l = N%n;

            while (m < (N%n))
            {
                l *= N%n;
                m += 1;
            }

            suma += l;
            N -= ((N%n)*(n/10));
            i += 1;
            n *= 10;
        }
        cout << "La suma es: " << suma <<endl;
        cout << "\n" <<endl;
    }
}
