#include <iostream>
#include <windows.h>

using namespace std;

float n;

int main()
{

    SetConsoleOutputCP(CP_UTF8);
    cout << "Ingrese un número: ";
    cin >> n;
    if (n == 0)
    {
        cout << "El número es cero";
    }
    else if (n < 0)
    {
        cout << "Es un número negativo";
    }
    else
    {
        cout << "Es un número positivo";
    }

    return 0;
}