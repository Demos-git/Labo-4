#include <iostream>
#include <windows.h>

using namespace std;

int nota;

int main()
{

    SetConsoleOutputCP(CP_UTF8);

    cout << "Porfavor ingrese su nota (0-100): ";
    cin >> nota;
    
    if (nota >= 90)
    {
        cout << "¡Felicidades, aprobaste con honores!";
    }
    else if (nota >= 60 && nota < 90)
    {
        cout << "Buen trabajo, aprobaste";
    }
    else
    {
        cout << "Lo siento, no lograstes aprobar. Esfuerzate más";
    }

    return 0;
}