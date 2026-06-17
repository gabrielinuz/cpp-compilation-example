#include "operaciones_basicas.hpp"
#include "utils.hpp"
#include <iostream>

using namespace std;

void sumar()
{
    clearConsole();
    int numero1, numero2;
    float resultado;

    cout << "\n\tSUMA DE DOS NUMEROS";
    cout << "\n\t===================\n";
    cout << "\n\tIngrese primer numero: ";
    cin >> numero1;
    cout << "\tIngrese segundo numero: ";
    cin >> numero2;
    cout << "\t---------------------------" << endl;
    resultado = numero1 + numero2;
    cout << "\tResultado: " << resultado << endl;
    pauseConsole();
}

void restar()
{
    clearConsole();
    int numero1, numero2;
    float resultado;

    cout << "\n\tRESTA DE DOS NUMEROS";
    cout << "\n\t====================\n";
    cout << "\n\tIngrese primer numero: ";
    cin >> numero1;
    cout << "\tIngrese segundo numero: ";
    cin >> numero2;
    cout << "\t---------------------------" << endl;
    resultado = numero1 - numero2;
    cout << "\tResultado: " << resultado << endl;
    pauseConsole();
}

void multiplicar()
{
    clearConsole();
    int numero1, numero2;
    float resultado;

    cout << "\n\tPRODUCTO DE DOS NUMEROS";
    cout << "\n\t=======================\n";
    cout << "\n\tIngrese primer numero: ";
    cin >> numero1;
    cout << "\tIngrese segundo numero: ";
    cin >> numero2;
    cout << "\t---------------------------" << endl;
    resultado = numero1 * numero2;
    cout << "\tResultado: " << resultado << endl;
    pauseConsole();
}

void dividir()
{
    clearConsole();
    int numero1, numero2;
    float resultado;

    cout << "\n\tCOCIENTE DE DOS NUMEROS";
    cout << "\n\t========================\n";
    cout << "\n\tIngrese primer numero: ";
    cin >> numero1;
    cout << "\tIngrese segundo numero: ";
    cin >> numero2;
    cout << "\t---------------------------" << endl;

    if (numero2 == 0)
    {
        cout << "\tResultado: No se puede dividir por cero." << endl;
    }
    else
    {
        resultado = numero1 / (numero2 * 1.0);
        cout << "\tResultado: " << resultado << endl;
    }
    pauseConsole();
}