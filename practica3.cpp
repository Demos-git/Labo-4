#include <iostream>
#include <windows.h>

using namespace std;

int edad;

int main (){
    SetConsoleOutputCP(CP_UTF8);

    cout << "Ingrese su edad: ";
    cin >> edad;

if (edad >=65)
{
    cout << "Es un adulto mayor";
} else if (edad <65 && edad >= 18)
{
    cout << "Es un adulto";
} else if (edad <18 && edad >=13)
{
    cout << "Es un adolescente";
} else {
    cout << "Es un niño";
}
    return 0;
}

