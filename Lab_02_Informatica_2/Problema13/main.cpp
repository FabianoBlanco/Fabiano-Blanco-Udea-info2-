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

void presentacion_matriz (int*);

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

    if ((i == 1 && (j >= 1 && j <= 8))||(i == 6 && (j >= 1 && j <= 8))||((i >= 2 && i <= 5) && j == 1)||(((i >= 2 && i <= 5) && j == 8)))
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
