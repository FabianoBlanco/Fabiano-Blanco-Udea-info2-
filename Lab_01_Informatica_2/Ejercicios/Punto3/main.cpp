#include <iostream>

using namespace std;

/*
 * Ejercicio 3
 *
 * Escriba  un programa que pida dos numeros A y B e imprima en pantalla el mayor.
 * Ej:  Si se ingresa 7 y 3 se debe imprimir:
 *      El mayor es 7.
*/

main()
{
    int A, B;                                                // Primero declaramos las dos variables que vamos a utilizar en este programa llamandolas A y B basandonos en el enunciado del ejercicio.

    cout << "Ingrese el primer numero: ";                    // Le pedimos al usuario que ingrese el valor que corresponde al primer numero que vamos a comparar (numero A).
    cin >> A;                                                // Le asignamos el valor que acaba de ingresar el usiario pára el primer numero a la variable A.
    cout << "\nIngrese el segundo numero: ";                 // Pedimos al ususario el valor que corresponde al segundo numero que vamos a comparar (numero B).
    cin >> B;                                                // Le asignamos a la variable B el valor que ingreso el usuario anteriormente que corresponde al segundo numero.

    if (A > B)                                               // Este condicional indica que si el numero asignado a la variable A es mayor al asignado a la variable B.
    {
        cout << "\n--> El mayor es " << A << "." <<endl;     // Ya que entro en este condicional imprime en pantalla que el numero A es mayor que el numero B.
    }
    else if (B > A)                                          // Este condicional indica todo lo contrario a lo anterior ya que indica que hacer en el caso que B sea mayor que A.
    {
        cout << "\n--> El mayor es " << B << "." <<endl;     // Ya que entro en este condicional se imprime en pantalla que el numero B es mayor que el numero B.
    }
    else                                                     // Y si en dado caso no se cumple ninguna de las condicionales anteriores se procede a hacer otro proceso.
    {
        cout << "\n--> Los dos numeros son iguales." <<endl; // Ya que no se cumplieron ninguna de las condiciones anteriores indica que A y B son iguales y procede a imprimirlo en pantalla.
    }

    cout << "\n" <<endl;                                     // Esto indica que vamos a generar un espacio adicional en la pantalla. Esto lo hacemos mas por estetica que por cualquier
                                                             // otra cosa ademas marca el final del programa.
}
