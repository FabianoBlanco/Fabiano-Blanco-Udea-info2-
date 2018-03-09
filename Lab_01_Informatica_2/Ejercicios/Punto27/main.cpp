#include <iostream>

using namespace std;

/*
 * Ejercicio 27
 *
 * Escriba un programa que actue como una calculadora con operaciones de suma, resta, multiplicacion y division, el usuario debe ingresar los operandos y la operacion a realizar.
 * Ej: Si se ingresa 3, + y 5 se debe imprimir:
 *     3+5=8
*/

main()
{
    int primernumero, segundonumero;
    char comando;

    cout << "\nPara realizar las difrentes operaciones ingrese el comando que corresponde a cada una: \n" <<endl;
    cout << "--> Suma: +\n" <<endl;
    cout << "--> Resta: -\n" <<endl;
    cout << "--> Multiplicacion: x\n" <<endl;
    cout << "--> Division: /\n" <<endl;
    cout << "\n" <<endl;

    cout << "Ingrese el comando para saber cual operacion ejecutar: ";
    cin >> comando;
    cout << "\n" <<endl;

    if (comando == 43)
    {
        cout << "Ingrese el numero al que se le va a sumar: ";
        cin >> primernumero;
        cout << "\nIngrese el numero que se le va a sumar: ";
        cin >> segundonumero;

        cout << "\n" <<endl;

        cout << primernumero << "+" << segundonumero << "=" << primernumero + segundonumero <<endl;

        cout << "\n" <<endl;
    }

    else if (comando == 45)
    {
        cout << "Ingrese el numero al que se le va a restar: ";
        cin >> primernumero;
        cout << "\nIngrese el numero que se le va a restar: ";
        cin >> segundonumero;

        cout << "\n" <<endl;

        cout << primernumero << "-" << segundonumero << "=" << primernumero - segundonumero <<endl;

        cout << "\n" <<endl;
    }

    else if (comando == 47)
    {
        cout << "Ingrese el numero que se va a multiplicar: ";
        cin >> primernumero;
        cout << "\nIngrese el numero por el que se va a multiplicar: ";
        cin >> segundonumero;

        cout << "\n" <<endl;

        cout << primernumero << "x" << segundonumero << "=" << primernumero * segundonumero <<endl;

        cout << "\n" <<endl;
    }

    else if (comando == 120)
    {
        cout << "Ingrese el numero que se va a dividir: ";
        cin >> primernumero;
        cout << "\nIngrese el numero por el que se va a dividir: ";
        cin >> segundonumero;

        cout << "\n" <<endl;

        cout << primernumero << "/" << segundonumero << "=" << primernumero / segundonumero <<endl;

        cout << "\n" <<endl;
    }

    else
    {
        cout << "Comando erroneo." <<endl;
        cout << "\n" <<endl;
    }
}

/*
 * Primero declaramos tres variables (dos tipo int y una tipo char) las cuales son:
 *          -> primernumero: Un numero ingresado por el usuario.
 *          -> segundonumero: Un numero ingresado por el ususario.
 *          -> comando: Un caracter que indica que proceso seguir el programa.
 *
 * Lo siguiente es imprimir en pantalla algo que le indique al usuario que debe ingresar para realizar las diferentes operaciones del programa.
 *
 * Despues vamos a pedirle al usuario que ingrese el caracter para que el programa sepa que hacer.
 *
 * A continuacion vamos a crear unas condicionales las cuales van a revisar si el caracter ingresado es alguno de los comandos validos y si
 * es asi realizar los procesos e imprimir lo que corresponde a cada caracter despues de pedir los numeros que se necesitan para realizarlo
 * y si no se cumple ninguno imprime que el caracter es una comando no valido.
*/
