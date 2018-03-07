#include <iostream>

using namespace std;

main (void)
{
    char letra;

    cout << "Ingrese una letra: ";
    cin >> letra;
    cout << "\n" <<endl;

    if ((letra >= 65)&&(letra <= 122))
    {
        if ((letra == 65)||(letra == 69)||(letra == 73)||(letra == 79)||(letra == 85)||(letra == 97)||(letra == 101)||(letra == 105)||(letra == 111)||(letra == 117))
        {
            cout << letra << " es una vocal." <<endl;
        }
        else
        {
            cout << letra << " es una consonante." <<endl;
        }
    }
    else
    {
        cout << "No es una letra." <<endl;
    }

    cout << "\n" <<endl;
}
