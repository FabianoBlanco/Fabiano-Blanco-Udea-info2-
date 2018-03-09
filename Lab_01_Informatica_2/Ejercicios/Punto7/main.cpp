#include <iostream>

using namespace std;

/*
 *Ejercicio 7
 *
 * Escriba un programa que pida un numero N e imprima en pantalla la suma de todos los numeros entre 0 y N (incluyendose el mismo).
 * Ej: Si se ingresa 5: 1+2+3+4+5 = 15, por lo que se debe imprimir:
 *     La sumatoria desde 0 hasta 5 es: 15.
*/

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

    cout << "\n->La suma de todos los numeros desde 0 hasta " << N << " es: " << suma << "\n" <<endl;
}

/*
 * Primero declaramos tres variables tipo int, la primera es N la cual va a ser el numero que va a ingresar el usuario, la segunda es i que va a funcionar como un contador y la tercera es
 * suma la cual va tener el valor correspondiente a la suma que debemos realizar.
 *
 * Luego vamos a pedirle al usuario que ingrese el numero con el que nos vamos a guiar para hacer la suma (numero N) y se lo asignamos a la variable N.
 *
 * Despues les asignamos valores a las variables suma e i, a la primera el valor 0 y a la segunda el valor 1.
 *
 * Para hacer el proceso primordial del programa creamos un ciclo while el cual se va a realizar mientras el valor de i sea menos que el valor de N. Este ciclo suma a la variable suama el
 * valor que tenga i en cada iteracion y asi mismo i aumenta uno a su valor.
 *
 * Para terminar el programa imprimimos en pantalla el resultado de la suma con las indicaciones pedidas en el enunciado del ejercicio.
*/
