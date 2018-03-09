#include <iostream>

using namespace std;

/*
 * Problema 5
 *
 * Escriba un programa que muestre el siguiente patron en la pantalla:
 *              *
 *             ***
 *            *****
 *           *******
 *            *****
 *             ***
 *              *
*/

main(void)
{
    int tam;

    cout << "Ingrese un numero impar: ";
    cin >> tam;

    cout << "\n" <<endl;

    if (tam % 2 == 0)
    {
        cout << "El numero ingresado no es impar..." <<endl;
        cout << "\n" <<endl;
    }

    else
    {
        int i = (tam/2), j = 1;

        while (j <= tam)
        {
            for (int k = i; k > 0; k--)
            {
                cout << " ";
            }
            for (int r = j; r > 0; r--)
            {
                cout << "*";
            }

            cout << "" <<endl;

            i -= 1;
            j += 2;
        }
        i += 2;
        j -= 4;

        while (j >= 0)
        {
            for (int k = i; k > 0; k--)
            {
                cout << " ";
            }
            for (int r = j; r > 0; r--)
            {
                cout << "*";
            }

            cout << "" <<endl;

            i += 1;
            j -= 2;
        }
        cout << "" <<endl;
    }
}

/*
 * Primero declaramos la variable llamada tam que vamos a utilizar para determinar el tamaño de la grafica.
 *
 * Despues le pedimos al usuario que ingrese un numero impar y se lo asignamos a la variable tam.
 *
 * Despues agregamos una condicional para prevenir que el usuario aya ingresado un numero par y si es asi terminar el programa despues de decirle en pantalla que ingreso un numero par.
 *
 * Si lo anterior no se cumple entramos a declarar y definir dos variables tipo int llamadas: i que es igual al valor de tam dividido entre dos y j que es igual a 1 y funcionara como
 * contador.
 *
 * Seguimos y creamos un ciclo while con la condicion de que debe ejecutarse mientras j sea menor o igual que el valor de la variable tam. Dentro de este ciclo creamos dos ciclos for
 * los cuales funcionan de la sigueinte manera:
 *          -> El primero para la cantidad de espacios  dependiendo de la variable i.
 *          -> El segundo para la cantidad de "*" dependiendo de la variable j.
 * Imprimiendolos por cada iteracion de manera seguida (sin saltos de linea) hasta que se cumplen los dos ciclos anidados.
 *
 * El primer ciclo while sirve para la parte que crece de la grafica y el segundo para la parte que disminuye en la cantidad de "*" aunque compartan la misma estructura aunque tengan
 * una manera completamente inversa de modificar sus contadores ya que en el caso del primero i disminuye de uno en uno y j aumenta de dos en dos mientras que en el segundo i aumenta
 * de uno en un o y j deisminuye de dos en dos y sus condicionales tambien son distintas ya que la condicion del segundo es que se ejecute mientras j sea mayor o igual que 0.
*/
