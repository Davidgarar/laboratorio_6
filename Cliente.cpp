#include<iostream>
#include<stdio.h>
using namespace::std;

#include "Cliente.h"

Cliente::Cliente()
{
    //ctor
    ti_cuenta = fecha_nac = direccion="";
    ingresos = 0;
}

Cliente::~Cliente()
{
    //dtor
}
void Cliente::setti_cuenta(){
    fflush(stdin);
    cout<<"ingrese el tipo de cuenta(ahorro o corriente): " <<endl;
    getline(cin, ti_cuenta);
}
void Cliente::setfecha_nac(){
    fflush(stdin);
    cout<<"Ingrese la su fecha de nacimiento (dia/mes/año) :" << endl;
    getline(cin,fecha_nac);
}
void Cliente::setdireccion(){
    fflush(stdin);
    cout<<"Ingrese su actual direccion de residencia: " << endl;
    getline(cin,direccion);
}
void Cliente::setingresos(){
    cout<<"ingrese el monto que suman sus ingresos: " << endl;
    cin>> ingresos;
}
void Cliente::setall(){
    setti_cuenta();
    setfecha_nac();
    setdireccion();
    setingresos();

}

string Cliente::getti_cuenta(){return ti_cuenta;}
string Cliente::getfecha_nac(){return fecha_nac;}
string Cliente::getdireccion(){return direccion;}
int Cliente::getingresos(){return ingresos;}

string Cliente::mostrar_info(){
    //polimorfismo
    cout<<"Nombre: " << nombre << endl;
    cout<<"Apellido: " << apellido << endl;
    cout<<"cedula: " << cedula << endl;
    cout<<"Telefono: " << telefono << endl;
    cout<<"Edad: " << edad << endl;
    cout<<"salario: " << salario << endl;
    cout<<"Tipo de cuenta: " << ti_cuenta << endl;
    cout<<"Fecha de nacimiento: " << fecha_nac<< endl;
    cout<<"direccion: " << direccion<< endl;
    cout<<"ingresos: " << ingresos<< endl;
    cout<<"hola" << endl;

}
