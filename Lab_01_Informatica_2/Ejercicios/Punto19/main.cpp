#include <iostream>

using namespace std;

main()
{
    int N, i, j;

    cout << "Ingrese el numero que se va a verificar: ";
    cin >> N;
    cout << "\n" <<endl;

    i = 1;
    j = 0;

    while (i < N)
    {
        if (N%i == 0)
        {
            j += 1;
        }
        i += 1;
    }

    if (j > 1)
    {
        cout << N << " no es un numero primo." <<endl;
    }
    else
    {
        cout << N << " es un numero primo." <<endl;
    }

    cout << "\n" <<endl;
}
