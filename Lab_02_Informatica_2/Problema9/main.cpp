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

/*
 * Primero definimos una funcion que va a recibir un puntero tipo int y va a retornar un na variable tipo int, esta funcion cumplira la funcion de "convertir" la cadena de caracteres
 * ingresada de char a int para poder realizar el trabajo de nuestro programa.
 *
 * En la funcion principal del programa empezamos declarando cinco variables, una tipo char y las cuatro restantes tipo int:
 *          -> cadena_nums[limit]: Esta variable va a almacenar los caracteres ingresados por el usuario para ser "traducidos" a tipo int.
 *          -> n: Este es el numero de caracteres que va a tener cada grupo y tambien es ingresado el valor por el usuario.
 *          -> numero: Obtendra su valor al ingresar la cadena de caracteres de cadena_nums a la funcion que hemos creado y esta retorne el producto de la misma.
 *          -> modulo_division: Esta variable empieza teniendo el valor de 1 aunque incrementara en un ciclo que se encuentra más adelante en el programa.
 *          -> suma: Empieza sindo igual a 0 aunque ira aumentando dependiendo de los numeros que se le sumen.
 *
 * Luego de hacer esto le pedimos al usuario que ingrese los valores que necesitamos para poder realizar el proceso del programa, el paso siguiente es dalre su valor correspondiente a
 * la variable numero e imprimiremos en pantalla con un mensaje el numero que se ha ingresado ya "convertido" en int.
 *
 * Despues ingresamos al primer cilo del programa en donde vamos a ir aumentando el valor de la variable modulo_division multiplicanola por 10 en cada iteracion mientra i sea menor que
 * la variable n.
 *
 * Al terminar esto entramos al segundo y ultimo ciclo del programa el cual va a ir aumentando al variable suma al ir le sumando a su valor el resultado del modul entre la variable numero
 * y la variable modulo_division y disminuyendo el valor de la variable numero al dividir en cada iteracion su valor entre el valor de la variable modulo_division.
 *
 * Para concluir imprimimos el resultado acompañado con un mensaje el valor de la variable suma en pantalla.
*/
