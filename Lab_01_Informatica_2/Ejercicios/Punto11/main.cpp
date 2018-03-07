#include <iostream>

using namespace std;

int main()
{
    int N, i;

    cout << "Ingrese un numero: ";
    cin >> N;
    cout << "\n" <<endl;

    i = 1;

    while (i <= 10)
    {
        cout << i << "x" << N << "=" << i*N <<endl;
        i += 1;
    }
    cout << "\n" <<endl;
}
