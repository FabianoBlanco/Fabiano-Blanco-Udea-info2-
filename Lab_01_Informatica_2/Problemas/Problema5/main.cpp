#include <iostream>

using namespace std;

main(void)
{
    int tam;

    cout << "Ingrese un numero impar: ";
    cin >> tam;

    cout << "\n" <<endl;

    if (tam % 2 == 0)
    {
        cout << "El numero ingresado no es impar..." <<endl;
        cout << "\n" <<endl;
    }

    else
    {
        int i = (tam/2), j = 1;

        while (j <= tam)
        {
            for (int k = i; k > 0; k--)
            {
                cout << " ";
            }
            for (int r = j; r > 0; r--)
            {
                cout << "*";
            }

            cout << "" <<endl;

            i -= 1;
            j += 2;
        }
        i += 2;
        j -= 4;

        while (j >= 0)
        {
            for (int k = i; k > 0; k--)
            {
                cout << " ";
            }
            for (int r = j; r > 0; r--)
            {
                cout << "*";
            }

            cout << "" <<endl;

            i += 1;
            j -= 2;
        }
        cout << "" <<endl;
    }
}
