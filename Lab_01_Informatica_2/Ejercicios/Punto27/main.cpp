#include <iostream>

using namespace std;

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
