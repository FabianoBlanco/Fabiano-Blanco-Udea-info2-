#include <iostream>

using namespace std;

/*
 * Problema 1
 *
 * Escriba un programa que identifique si un caracter ingresado es una vocal, una conconante o ninguna de las 2 e imprima un mensaje seguin el caso.
 * EJ: El formato de salida debe ser:
 *     no es una letra
 *     a es una vocal
*/

main (void)
{
    char letra;

    cout << "Ingrese una letra: ";
    cin >> letra;
    cout << "\n" <<endl;

    if ((letra >= 65)&&(letra <= 122))
    {
        if ((letra == 65)||(letra == 69)||(letra == 73)||(letra == 79)||(letra == 85)||(letra == 97)||(letra == 101)||(letra == 105)||(letra == 111)||(letra == 117))
        {
            cout << letra << " es una vocal." <<endl;
        }
        else
        {
            cout << letra << " es una consonante." <<endl;
        }
    }
    else
    {
        cout << "No es un caracter valido." <<endl;
    }

    cout << "\n" <<endl;
}

/*
 * Primero declaramos una variable de tipo char llamada letra.
 *
 * Despues le pedimos al usuario que ingrse una letra y se la asignamos a la variable letra.
 *
 * A continuacion vamos a una condicional que revisa que el caracter ingresado es una letra o no con ayuda de los valores de la tabla ASCII, si se cumple vamos a revisar si
 * su valor en la tabla ASCII es igual a una vocal, de lo contrario indica que es una vocal, de lo contrario indica que es una consonante y si el primer condicional no se cumple
 * indica que el caracter ingresado no es reconocido como una letra.
*/
