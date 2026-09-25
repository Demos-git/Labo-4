#include <iostream>
#include <windows.h>

using namespace std;

int nota;

int main()
{

    SetConsoleOutputCP(CP_UTF8);

    cout << "Ingrese si nota (0-100): ";
    cin >> nota;

    if (nota >= 90)
    {
        cout << "Consiguiste una A. ¡Felicidades!";
    }
    else if (nota < 90 && nota >= 80)
    {
        cout << "Conseguiste una B. Muy bien, estamos mejorando";
    }
    else if (nota < 80 && nota >= 70)
    {
        cout << "Conseguiste una C. Se puede mejorar, esforcemonos";
    }
    else if (nota < 70 && nota >= 60)
    {
        cout << "Conseguiste una D. No nos conformemos con la minima, aspiremos en grande";
    }
    else
    {
        cout << "Consefuiste una F. Lo siento, reprobaste";
    }

    return 0;
}