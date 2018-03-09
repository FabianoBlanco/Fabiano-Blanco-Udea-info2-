#include <iostream>

using namespace std;

/*
 * Ejercicio 23
 * 
 * Escriba un programa que pida dos numeros A y B e imprima en pantalla el minimo comun multiplo entre los dos.
 * Ej: Si se ingresan 4 y 6 se debe imprimir:
 *     -> El MCM se 4 y 6 es: 12.
*/
  
main()
{
    int A, B, i, j, MCM, a, b;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "\nIngrese el segundo numero: ";
    cin >> B;

    if (A > B)
    {
        i = A;
    }
    else
    {
        i = B;
    }

    cout << "\n" <<endl;

    j = 2;
    MCM = 1;
    a = A;
    b = B;

    while ((A!=1 and j<=i) || (B!=1 and j<=i))
    {
        if ((A>1 and A%j==0) and (B>1 and B%j==0))
        {
            A = A/j;
            B = B/j;
            MCM *= j;
            if (A%j!=0 and B%j!=0)
            {
                j += 1;
            }
        }
        else if (B>1 and B%j==0)
        {
            B = B/j;
            MCM *= j;
            if (B%j != 0)
            {
                j += 1;
            }
        }
        else if (A>1 and A%j == 0)
        {
            A = B/j;
            MCM *= j;
            if (B%j != 0)
            {
                j += 1;
            }
        }
        else
        {
            j += 1;
        }
    }

    if (A==1 and B==1)
    {
        cout << "El MCM de " << a << " y " << b << " es: " << MCM <<endl;
    }
    else
    {
        cout << a << " y " << b << " no tienen MCM" <<endl;
    }

    cout << "\n" <<endl;
}

/*
 *Primero declaramos las variables que vamos a necesitar para realizar el programa las cuales son:
 *          -> A: Un numero ingresado por el usuario.
 *          -> B: Un numero ingresado por el usuario.
 *          -> MCM: Donde vamos a ingresar el resultado final del programa el cual indica cual es el minimo comun multiplo.
 *          -> a: Una variable que vamos a utilizar al final del programa para imprimir lo que nos pide el ejercicio.
 *          -> b: Una variable que vamos a utilizar al final del programa para imprimir lo que nos porde el ejercicio.
 *          -> i: Una variable que va a indicar el limite hasta donde debe llegar el ciclo.
 *          -> j: Esta variable funciona como un contado.
 *
 * Creamos un condicional que indica que si A es mayor que B le de a i el valor que tiene A para usaar esta variables como limite en nuestro ciclo y si no se cumple esto le asigne a i
 * el valor de B.
 *
 * Imprimimos en pantalla un salto de linea para un poco mas de estetica.
 *
 * Les asignamos valores a algunas varables las cuales son:
 *          -> j = 2
 *          -> MCM = 1
 *          -> a = A
 *          -> b = B
 *
 * Luego de hacer esto crearemos un ciclo con la condicion de ejecutarse mientras A sea diferente a 1 y j sea menor a i o que B sea diferente a 1 y j sea menor a i.
 *
 * En cada iteracion del ciclo se pasa por unos condicionales para que se pueda dividir cada numero hasta que ambos sean iguales 1 e ir acumulando dla miltiplicacion en la variable
 * MCM de los divisores de los dos numeros y tambien ir aumentando de 1 en 1 la variable j para que no se haga un ciclo infinito, tambien las variables A y B van disminuyendo al
 * asignarles en cada iteracion el valor de ellas mismas pero divididas entre el valor de j.
 *
 * Para terminar tenemos un condicional de que si A y B son iguales a uno imprima el minimo comun multiplo de los dos numeros ingresados y si no imprima que no tienen minimo comun multiplo.
*/
