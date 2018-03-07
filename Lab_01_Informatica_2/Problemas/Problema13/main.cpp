#include <iostream>

using namespace std;

int main()
{
    int N, i, j, r, suma;

    cout << "Ingrese un numero: ";
    cin >> N;
    cout << "\n" <<endl;

    if (N <= 1)
    {
        cout << "Con el numero ingresado no se puede hacer ninguna suma ya que no tiene numeros primos anteriores." <<endl;
    }

    else
    {
        r = 2;
        suma = 0;

        while (r <= N)
        {
            i = 1;
            j = 0;

            while (i < r)
            {
                if (r%i == 0)
                {
                    j += 1;
                }
                i += 1;
            }
            if (j == 1)
            {
                suma += r;
            }
            r += 1;
        }
        cout << "El resultado de la suma es: " << suma <<endl;
    }
    cout << "\n" <<endl;
}
