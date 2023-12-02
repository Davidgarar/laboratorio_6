#include<iostream>
#include<stdio.h>
using namespace::std;

#include "Acciones.h"

Acciones::Acciones()
{
    //ctor
    cant_horas = cant_saldo = prestamo = 0 ;
    nivel_estu = correo = movimientos = "";
}

Acciones::~Acciones()
{
    //dtor
}
void Acciones::setcant_horas(){
    cout<<"Ingresa la cantidad de horas: " << endl;
    cin>>cant_horas;
}
void Acciones::setcant_saldo(){
    cout<<"ingrese la saldo: " << endl;
    cin>>this->cant_saldo;
}
void Acciones::setprestamo(){
    cout<<"ingresa la cantidad de dinero que desea de prestamo: " << endl;
    cin>>prestamo;

}
void Acciones::setnivel_estu(){
    fflush(stdin);
    cout<<"ingrese el nivel de estudios: " << endl;
    cout<<"Tecnico " << endl;
    cout<<"tecnologo " << endl;
    cout<<"Profesional " << endl;
    cout<<"Magister " << endl;
    cout<<"Doctorado " << endl;
    getline(cin,nivel_estu);
}
void Acciones::setcorreo(){
    fflush(stdin);
    cout<<"Ingrese el correo : " << endl;
    getline(cin,correo);
}
void Acciones::setmovimientos() {
    int opcion;

    cout << "Seleccione la acción que desea realizar:" << endl;
    cout << "1. Hacer un giro" << endl;
    cout << "2. Retirar dinero" << endl;

    cin >> opcion;
    cin.ignore();

    switch (opcion) {
        case 1:
            cout << "Ingrese los detalles del giro: ";
            getline(cin, movimientos);
            break;
        case 2:
            cout << "Ingrese los detalles del retiro: ";
            getline(cin, movimientos);
            break;
        default:
            cout << "Opción no válida." << endl;
            break;
    }
}


int Acciones::getcant_horas(){return cant_horas;}
int Acciones::getcant_saldo(){return cant_saldo;}
int Acciones::getprestamo(){return prestamo;}
string Acciones::getnivel_estu(){return nivel_estu;}
string Acciones::getcorreo(){return correo;}
string Acciones::getmovimientos(){return movimientos;}
