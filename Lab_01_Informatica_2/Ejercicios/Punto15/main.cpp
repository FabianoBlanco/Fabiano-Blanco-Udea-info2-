#include <iostream>

using namespace std;

/*
 * Ejercicio 15
 *
 * Escriba  un programa que pida constantemente numeros hasta que se ingrese el numero cero e imprima en pantalla la suma de todos los numeros ingresados.
 * Ej: Si se ingresa 1, 2, 3, 0 se debe imprimir:
 *     El resultado de la sumatoria es: 6.
*/

main()
{
    int numero, suma;

    suma = 0;
    numero = 1;

    while (numero != 0)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        cout << "\n" <<endl;
        suma += numero;
    }

    cout << "\nEl resultado de la suma es: " << suma << "\n" <<endl;
}

/*
 * Primero declaramos las tres variables que vamos a utilizar en el programa las cuales son:
 *      -> numero: El numero que va a ingresar el usuario.
 *      -> suma: La suma de todos los numero que ingrese el ususario antes de que ingrese 0.
 *
 * Creamos un cliclo while con la condicion de ejecutarse mientras el valor de la variable numero no sea igual a 0. En este ciclo le pedimos en cada iteracion al usuario que ingrese un
 * numero y se lo asignamos a la variable numero , luego para que se vea mas estetico indicamnos un salto de linea mas y le sumamos a la variable suma el valor que tiene en esa iteracion
 * la variable numero.
 *
 * Cunado ya no se entre mas al ciclo se va imprimir en pantalla un mensaje y el resultado de la suma de todos estos numero guardados en la variable suma.
*/
