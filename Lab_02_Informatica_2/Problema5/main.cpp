#include <iostream>
#define limit 50

using namespace std;

/*Haga una función que reciba un numero entero (int) y lo convierta a cadena de caracteres. Use parámetros por referencia para retornar la cadena. Escriba un programa de prueba.
 *Ejemplo: si recibe un int con valor 123, la cadena que se retorne debe ser “123”.
*/

int can_digitos(int);

int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    int digitos = can_digitos(numero);
    char cadena[limit];
    char numeros = 48;
    int i = digitos-1;

    while (2>1)
    {
        if (numero == 0) break;
        cadena[i] = (numero%10)+numeros;
        numero /= 10;
        i -= 1;
    }

    while (i < digitos)
    {
        cout << cadena[i];
        i += 1;
    }
    cout << "" <<endl;
    return 0;
}


int can_digitos(int numero)
{
    int cantidad = 0;

    while (2>1)
    {
        if (numero == 0) break;
        cantidad += 1;
        numero /= 10;
    }
    return cantidad;
}

/*
 * Primero declaramos una funcion la cual va a indicarnos cuantos digitos tiene la variable tipo int que se ingreso.
 *
 * Luego de hacer esto empezamos el proceso principal del programa declarando una variable tipo int llamada numero la cual obtendra su valor al ser ingresado por el ususario.
 *
 * Luego de pedirle al usuario que ingrese el valor para la variable numero se crea la variable llamada digitos que tendra el valor que retorne la funcion con el valor de numero ingresado
 * a ella, y creamos dos variable tipo char, la primera esta deifinida hasta un limite que en este caso es 50 y la segunda esta definida con el caracter de 48, para terminar esta parte del
 * programa cramos otra variable tipo int llamada i la cual iniciara con el valor de la variable digitos menos uno.
 *
 * A continuacion ingresamos al primer ciclo el cual tiene la condicion de ejecutarce mientras 2 sea mayor que 1, y para evitar un ciclo infinito usamos un if con la condicion de que la
 * variable numero sea igual a 0 para que se salga del ciclo, aparte de esto el proceso que se realiza en cada iteracion es que se le da el valor a la variable cadena en su posicion i el
 * resultado del modulo 10 de numero más la variable numeros, se le da el valor a la variable numero de el mismo dividido en 10 y para terminar se le resta uno al valor de i.
 *
 * Para terminar creamos un ciclo para poder imprimir los valores de la varible cadena y se indica la condicion de seguirse ejecutando mientra i sea menor que el valor de la variable digitos
 * se va imprimiendo sin un salto de linea el caracter que este en la varible cadena en la posicion i y para terminar el ciclo se le suma uno al valor que ya tenia la variable i.
*/
