#include <iostream>

using namespace std;

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

