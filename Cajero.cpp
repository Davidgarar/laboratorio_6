#include<iostream>
using namespace::std;
#include "Cajero.h"

Cajero::Cajero()
{
    //ctor
    conver_moneda = 0;
}

Cajero::~Cajero()
{
    //dtor
}
void Cajero::setconver_mone() {
    int opcion;
    double cantidad;
    double tasa_dolar = 3500.0;  // Tasa de cambio ficticia para el ejemplo
    double tasa_euro = 4100.0;   // Tasa de cambio ficticia para el ejemplo
    double tasa_yen = 32.0;      // Tasa de cambio ficticia para el ejemplo

    cout << "Elija la moneda de origen:" << endl;
    cout << "1. Dólares" << endl;
    cout << "2. Euros" << endl;
    cout << "3. Yenes" << endl;
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese la cantidad en dólares: ";
            cin >> cantidad;
            conver_moneda = cantidad * tasa_dolar;
            break;
        case 2:
            cout << "Ingrese la cantidad en euros: ";
            cin >> cantidad;
            conver_moneda = cantidad * tasa_euro;
            break;
        case 3:
            cout << "Ingrese la cantidad en yenes: ";
            cin >> cantidad;
            conver_moneda = cantidad * tasa_yen;
            break;
        default:
            cout << "Opción no válida." << endl;
            break;
    }

}


int Cajero::getconver_mone(){return  conver_moneda;}
string Cajero::mostrar_info(){
      cout << "nombre: " << endl;
      cout << "La cantidad convertida a pesos colombianos es: " << conver_moneda << endl;

}
