#include <iostream>

using namespace std;

/*
 * Problema 13
 *
 * Escriba un programa que reciba un numero y calcule la suma de todos los primos menores que el numero ingresado.
 * Ej: Si se recibe 10 el programa debe imprimir 17.
 * Nota: La salida debe ser: El resultado de la suma es: 17
*/

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

/*
 * Este programa en realidad esta basado en uno de los ejercicios que realizamos antes pero adicionado a un ciclo que nos permite sumar cuales son los numeros primos anteriores al numero
 * ingresado pero la base principal que es el ciclo anidado que nos permite verificar si un numero es primo o no ha sido explicado en un ejercicio anterios.
*/
