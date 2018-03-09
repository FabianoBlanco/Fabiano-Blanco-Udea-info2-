#include <iostream>

using namespace std;

/*
 * Ejercicio 19
 *
 * Escriba un programa que pida un numero N e imprima si es o no un numero primo.
 * Ej: Si se ingresa 7 se debe imprimir:
 *     7 es un numero primo.
 *     y si se ingresa 8 se debe imprimir:
 *     8 No es un numero primo.
*/

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

/*
 * Primero declaramos las tres variables que vamos a utilizar en el programa las cuales son:
 *         -> N: El numero que ingresa el usuario y debemos verificar si es o no un numero primo.
 *         -> i: Es un contador.
 *         -> j: Es un acumulador
 *
 * Pedimos al usuario que ingrese el numero que quiere verificar si es o no un numero primo, se le asigna a la variable N y para que se vea mas estetico se imprime un salto de linea dicional.
 *
 * Se le asigan los valores a las variables i y j:
 *         -> i = 1
 *         -> j = 0
 *
 * Se crea un ciclo while con la condicion de que se ejecute mientras el valor de la variable i sea menor al valor de la variable N. Dentro de este hay un condicional que indica que si N
 * tiene una division entera se le suma 1 a la variable j que esta haciendo de acumulador y ya que i empieza siendo 1 siempre j va a ser por lo menos 1 ya que todos los numeros tienen
 * division entera entre 1 y para terminar el ciclo se le suma uno a i.
 *
 * Luego de este ciclo se escribe una condicional que indica que si j es mayor que 1 lo que quiere decir que tiene mas de un variables aparte de 1 y el mismo imprima que este numero nu es
 * primo y si no se cumple esto imprima que el numero ingresado si es un numero primo.
*/
