#include<iostream>
#include<stdio.h>
using namespace::std;

#include "Persona.h"

Persona::Persona(string n, string a, long c, long t, int e, int s)
{
    //ctor
    nombre = n;
    apellido = a;
    cedula = c;
    telefono = t;
    edad = e;
    salario = s;

}

Persona::~Persona()
{
    //dtor
}
void Persona::setnombre(){
    fflush(stdin);
    cout<<"Ingrese el nombre: " << endl;
    getline(cin,nombre);
}
void Persona::setapellido(){
    fflush(stdin);
    cout<<"Ingrese el apellido: " << endl;
    getline(cin,apellido);
}
void Persona::setcedula(){
    cout<<"ingrese su cedula: " << endl;
    cin>>cedula;
}
void Persona::settelefono(){
    cout<<"ingrese su telefono: " << endl;
    cin>>telefono;
}
void Persona::setedad(){
    cout<<"ingrese su edad: " << endl;
    cin>>edad;
}
void Persona::setsalario(){
    cout<<"Ingrese su salario " << endl;
    cin>>salario;
}
void setall(){
}

string Persona::getnombre(){return nombre;}
string Persona::getapellido(){return apellido;}
long Persona::getcedula(){return cedula;}
long Persona::gettelefono(){return telefono;}
int Persona::getedad(){return edad;}
int Persona::getsalario(){return salario;}

string Persona::mostrar_info(){
    cout<<"Nombre: " << nombre << endl;
    cout<<"Apellido: " << apellido << endl;
    cout<<"cedula: " << cedula << endl;
    cout<<"Telefono: " << telefono << endl;
    cout<<"Edad: " << edad << endl;
    cout<<"salario: " << salario << endl;
}





