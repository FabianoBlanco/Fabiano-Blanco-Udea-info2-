#include <iostream>

using namespace std;

/*
 * Se tiene una fotografía digitalizada de una porción de la galaxia NGC 1300 que está ubicada a
 * 61.000.000 de años luz del planeta Tierra. La representación digital de la imagen está constituida por una matriz
 * de números enteros; en la cual, cada uno representa la cantidad de luz en ese punto de la imagen, así:
 *
 * 0  3  4  0   0  0  6  8
 * 5  13 6  0   0  0  2  3
 * 2  6  2  7   3  0  10 0
 * 0  0  4  15  4  1  6  0
 * 0  0  7  12  6  9  10 4
 * 5  0  6  10  6  4  8  0
 *
 * Se puede determinar si el elemento ai,j de la matriz representa una estrella si se cumple que:
 *
 * (ai,j + ai,j−1 + ai,j+1 + ai−1,j + ai+1,j)/5 > 6
*/

main()
{
    int i, j;
    float resultado;

    cout << "Ingrese el numero de fila (i) recuerde que el rango es de 1 a 6: ";
    cin >> i;
    cout << "\nIngrese el numero de columna (j) recuerde que el rango es de 1 a 8: ";
    cin >> j;
    cout << "\n" <<endl;

    if (((i > 6)||(i < 1))||((j > 8)||(j < 1)))
    {
        cout << "\nIngreso un numero que no esta en el rango permitido para hacer la prueba.\n" <<endl;
    }

    else if ((i == 1 && (j >= 1 && j <= 8))||(i == 6 && (j >= 1 && j <= 8))||((i >= 2 && i <= 5) && j == 1)||(((i >= 2 && i <= 5) && j == 8)))
    {
        cout << "\nEl elemento a" << i << j << " no representa una estrella.\n" <<endl;
    }

    i -= 1;
    j -= 1;

    float matriz[6][8] = {
                        {0, 3, 4, 0, 0, 0, 6, 8},
                        {5, 13, 6, 0, 0, 0, 2, 3},
                        {2, 6, 2, 7, 3, 0, 10, 0},
                        {0, 0, 4, 15, 4, 1, 6, 0},
                        {0, 0, 7, 12, 6, 9, 10, 4},
                        {5, 0, 6, 10, 6, 4, 8, 0}
                       };

    resultado = (matriz[i][j] + matriz[i][j-1] + matriz[i][j+1] + matriz[i-1][j] + matriz[i+1][j])/5;

    if (resultado > 6)
    {
        cout << "\nEl elemento a" << i+1 << j+1 << " representa una estrella.\n" <<endl;
    }
    else
    {
        cout << "\nEl elemento a" << i+1 << j+1 << " no representa una estrella.\n" <<endl;
    }
}

/*
 * Para empezar declaramos tres variables dos tipo int y la restante tipo float:
 *          -> i: Esta es una variable tipo int y sera un valor ingresado por el usuario para saber a que fila del vector dirigirnos.
 *          -> j: Esta variable de tipo int correspondera a un valor ingresado por el usuario para saber a que columna va a pertenecer el numero que vamos a evaluar.
 *          -> resultado: Esta es una variable tipo float la cual va a tener el valor del resultado de una formula predeterminada.
 *
 * El siguiente paso es pedirle al usuario que ingrese los valores necesarios para realizar el proceso del programa.
 *
 * Luego vamos a definir un if y un else if como prevencion para ciertos errores que pueden darse dependiendo de ciertos valores que pueda ingresar el ususario e imprimir lo que corresponda
 * en cualquiera de estos casos.
 *
 * A continuacion vamos a restarle uno al valor de i y de j y vamos definir una variable tipo float llamda matriz que sera un vector y sera de tamaño [6][8] y luego se actualizara el valor
 * de la variable resultado despues de realizarse el proceso de la formula.
 *
 * Para terminar se entra a unos condicionales (if y else) y dependiendiendo del valor de la variable resultado imprimiran diferentes cosas en pantalla.
*/
