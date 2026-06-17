#include "operaciones_variadas.hpp"
#include "utils.hpp"
#include <iostream>

using namespace std;

void convertirNumeroADia()
{
    clearConsole();
    cout << "\n\tCONVIERTE NUMERO A DIA";
    cout << "\n\t======================\n";
    
    int dia;
    cout << "\tIngrese el numero de dia: ";
    cin >> dia;

    switch (dia)
    {
        case 1: cout << "\tLunes" << endl; break;
        case 2: cout << "\tMartes" << endl; break;
        case 3: cout << "\tMiercoles" << endl; break;
        case 4: cout << "\tJueves" << endl; break;
        case 5: cout << "\tViernes" << endl; break;
        case 6: cout << "\tSabado" << endl; break;
        case 7: cout << "\tDomingo" << endl; break;
        default: cout << "\tDia invalido" << endl; break;
    }
    pauseConsole();
}

void sumarPrimerosNumeros()
{
    clearConsole();
    int n;
    int suma;

    cout << "\n\tSUMA DE LOS PRIMEROS N NUMEROS";
    cout << "\n\t==============================\n";
    cout << "\tIngrese numero n: ";
    cin >> n;

    suma = n * (n + 1) / 2;
    cout << "\tLa suma de los primeros n numeros es = " << suma << endl;
    pauseConsole();
}

void factorial()
{
    clearConsole();
    int numero, i;
    float factorial;

    cout << "\n\tFACTORIAL DE UN NUMERO";
    cout << "\n\t======================\n";
    cout << "\tIngrese el numero: ";
    cin >> numero;

    factorial = 1;
    for (i = 1; i <= numero; i++)
    {
        factorial = factorial * i;
    }
    cout << "\t" << numero << "! = " << factorial << endl;
    pauseConsole();
}

void invertirNumero4Cifras()
{
    clearConsole();
    int nume;
    int u, d, c, um;
    int a, b;
    int resultado;

    cout << "\n\tINVERTIR NUMERO DE 4 CIFRAS";
    cout << "\n\t===========================\n";
    cout << "\n\tIngrese un numero de cuatro cifras: ";
    cin >> nume;

    um = nume / 1000;
    a = nume / 100;
    c = a % 10;
    b = nume / 10;
    d = b % 10;
    u = nume % 10;
    resultado = u * 1000 + d * 100 + c * 10 + um;

    cout << "\t" << u << " " << d << " " << c << " " << um << endl;
    cout << "\tEl numero invertido es: " << resultado << endl;
    pauseConsole();
}