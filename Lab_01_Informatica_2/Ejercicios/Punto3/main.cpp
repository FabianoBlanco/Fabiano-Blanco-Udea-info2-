#include <iostream>

using namespace std;

main()
{
    int A, B;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "\nIngrese el segundo numero: ";
    cin >> B;

    if (A > B)
    {
        cout << "\nEl mayor es " << A << "." <<endl;
    }
    else if (B > A)
    {
        cout << "\nEl mayor es " << B << "." <<endl;
    }
    else
    {
        cout << "\nLos dos numeros son iguales." <<endl;
    }

    cout << "\n" <<endl;
}
