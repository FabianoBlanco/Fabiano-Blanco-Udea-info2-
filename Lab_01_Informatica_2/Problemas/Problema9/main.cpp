#include <iostream>

using namespace std;

/*
 * Escriba un programa que pida un numero entero N e imprima el resultado de la suma de todos sus digitos elevados a si mismo.
 * EJ: Si se ingresa 1223 el resultado seria 1**1+2**2+2**2+3**3 = 36.
 * Nota: La salida del programa debe ser: El resultado de la suma es: 36.
*/

int main()
{
    int num;
    int sum=0;
    int multiplex;
    int elevandolo;

    cout << "Ingrese el numero: ";
    cin >> num;
    cout << "\n" <<endl;

    while (2>1){
        if (num == 0) break;
        multiplex = num%10;
        elevandolo = 1;
        for (int i = 0; i < multiplex; i++){
            elevandolo = elevandolo*multiplex;
        }
        sum = elevandolo+sum;
        num = num/10;
    }
    cout << "La suma es: " << sum << "\n" <<endl;
    return 0;
}

/*
 * Primero declaramos cuatro variables tipo int y definimos tambien una de ellas:
 *          -> num
 *          -> sum = 0
 *          -> multiplex
 *          -> elevadolo
 *
 * Despues de esto le pedimos al usuario que ingrese un numero el cual es asignado a la variable num.
 *
 * A continuacion creamos un ciclo while con una condicional que haga que siempre se cumple en este caso mientras 2 sea mayo que 1 y cuando entramos al ciclo nos encontramos con un
 * condicional que indica que cuando el valor de num se vuelva 0 se debe detener el ciclo y si no es asi en cada iteracion multiplex toma el valor del modulo entre num y 10 y le da el
 * valor de 1 a elevandolo para entrar a un ciclo for anidado que tiene un rango que indica que va desde 0 hasta un valor antes de mnultiplex y va aumentando de uno en uno, en este
 * ciclo elevandolo va tomando el valor de el mismo multiplicado por multiplex, despues de que temina este ciclo a sum se le asigna el valor de el mismo mas el valor de elevadolo y num
 * toma el valor de el mismo dividido entre 10.
 *
 * Par terminar se imprime junto con el mensaje obligatorio el resultado de la suma que esta en la variable sum.
*/
