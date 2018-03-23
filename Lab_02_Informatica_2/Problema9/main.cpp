#include <iostream>
#define limit 50

using namespace std;

/*Problema #9
 *
 * Escribir un programa que reciba un número n y lea una cadena de caracteres numéricos, el programa debe separar la cadena de caracteres en números de n cifras, sumarlos e imprimir
 * el resultado. En caso de no poderse dividir exactamente en números de n cifras se colocan ceros a la izquierda del primer número.
 * Ejemplo: Si n=3 y se lee el arreglo 87512395 la suma seria 087+512+395=994.
 * Nota: la salida del programa debe ser:
 * Original: 87512395.
 * Suma: 994.
*/

int trad_num(char*);

int main()
{
  char cadena_nums[limit];
  int n, numero;
  int modulo_division = 1;
  int suma = 0;

  cout << "Ingrese el numero del que se va a hacer la suma: ";
  cin >> cadena_nums;
  cout << "Ingrese el numero: ";
  cin >> n;

  numero = trad_num(cadena_nums);
  cout << "\nOriginal: " << numero <<endl;

  for (int i = 0; i < n; i++)
  {
      modulo_division *= 10;
  }

  while (numero != 0)
  {
      suma += numero%modulo_division;
      numero /= modulo_division;
  }
  cout << "Suma: " << suma << "\n" <<endl;
}

int trad_num(char *cadena_nums)
{
    int numeros[limit];
    int numero_tras = 0;
    int cont_caracteres = 0;
    int cont_caracteres_copia;

    for (int i = 0; i < limit; i++)
    {
        if (int(cadena_nums[i]) == 0) break;
        cont_caracteres += 1;
        numeros[i] = int(cadena_nums[i])-48;
    }

    cont_caracteres_copia = cont_caracteres-1;

    for (int i = 0; i < cont_caracteres; i++)
    {
        for (int j = 0; j < cont_caracteres_copia; j++)
        {
            numeros[i] = numeros[i]*10;
        }
        cont_caracteres_copia -= 1;
        numero_tras += numeros[i];
    }
    return numero_tras;
}

