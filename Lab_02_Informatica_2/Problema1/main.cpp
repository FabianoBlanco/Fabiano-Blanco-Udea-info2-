#include <iostream>

using namespace std;

/*Problema #1
 *
 * Se necesita un programa que permita determinar la mínima combinación de billetes y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
 * $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50. Hacer un programa que entregue el número de billetes y monedas de cada denominación para
 * completar la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla. Use
 * arreglos y ciclos para realizar el programa.
 * Ejemplo: si se ingresa 47810, el programa debe imprimir:
 * 50000 : 0
 * 20000: 2
 * 10000 : 0
 * 5000: 1
 * 2000 : 1
 * 1000: 0
 * 500 : 1
 * 200: 1
 * 100 : 1
 * 50: 0
 * Faltante: 10
*/

main()
{
   int montos[9] = {50000, 20000, 10000, 5000, 2000, 500, 200, 100, 50};
   int cantidad = 0;
   int dinero;
   cout << "Ingrese la cantidad de dinero: ";
   cin >> dinero;
   cout << "\n" <<endl;
   for (int i=0; i<9; i++){
       cantidad = dinero/montos[i];
       dinero = dinero%montos[i];
       cout << montos[i] << ": " << cantidad << endl;
   }
   cout << "Faltante: " << dinero << endl;
   cout << "\n" <<endl;
}

/*
 * Primero declaramos las tres variables que vamos a utilzar en el programa y definimos dos de ellas:
 *          -> montos: Este es un array tipo int que tiene todos los valores que podemos devolver.
 *          -> cantidad: Esta se va a utilizar como un contador ya que se va a utilizar para saber cuantas veces se va a devolver una denominacion de dinero.
 *          -> dinero: Esta variable va a tener su valor cuando el usuario la ingrese y va a ser el valor que hay que devolver.
 *
 * Luego de hacer esto le pedimos al usuario que ingrese el valor que va a ser asignado a la variable dinero.
 *
 * Creamos un ciclo para poder hacer el proceso necesario para el desarrollo del programa el cual es realizado nueve veces por lo menos. Primero descubrimos cuantas veces se puede devolver
 * el valor al que corresponde la posicion i en montos para el monto, despues reduciomos el valor de dinero dependiendo de la cantidad de veces que se pueda devolver este monto de dinero y
 * en cada iteracion se va imprimiendo la informacion del monto y la cantidad que se devolvio de el.
 *
 * Cuando se sale del ciclo se imprime en pantalla la cantidad de dinero que no pudo ser devuelta.
*/
