#include <iostream>

using namespace std;

/*
 * Ejercicio 11
 *
 * Escriba un programa que pida un numero N e imprima en pantalla su tabla de multiplicar hasta 10xN.
 * Ej: Si se ingresa 7 se debe imprimir:
 *     1x7 = 7
 *     2x7 = 14
 *     3x7 = 21
 *     4x7 = 28
 *     5x7 = 35
 *     6x7 = 42
 *     7x7 = 49
 *     8x7 = 56
 *     9x7 = 63
 *     10x7 = 70
*/

int main()
{
    int N, i;

    cout << "Ingrese un numero: ";
    cin >> N;
    cout << "\n" <<endl;

    i = 1;

    while (i <= 10)
    {
        cout << i << "x" << N << "=" << i*N <<endl;
        i += 1;
    }
    cout << "\n" <<endl;
}

/*
 * Iniciamos declarando las dos variables que vamos a usar las cuales son i que va a ser un contador y N que va a tener el numero ingresado por el ususario.
 *
 * Luego vamos a pedirle al usuario que ingrese el numero del que quiera que hagamos la tabla de multiplicar y se lo asignamos a la variable N, al final de este fragmento del programa
 * adicionamos algo que nos de un salto de linea adicional para darle algo mas de estetica al programa.
 *
 * Le asignamos el valor de 1 a la variable i para que desde este valor empiece el contador.
 *
 * Creamos un ciclo while con la condicional de que se va a ejecutar mientra la varible i sea menor o igual que 10 ya que este es el valor maximo de la tabla de multiplicar
 * que debemos desarrollar. Dentro del ciclo hacemos que imprima la parte grafica que indique que se multiplica el valor al que corresponde en esa iteracion la variable i por el valor de N
 * y el resultado de esta multiplicacion, para el final del ciclo aumentamos 1 al valor de i.
 *
 * Para terminar el programa indicamos que de un salto de linea adicional para darle algo mas de estetica al programa.
*/
