#include<iostream>
using namespace::std;
#ifndef CAJERO_H
#define CAJERO_H

#include "Persona.h"


class Cajero:public Persona
{
    public:
        Cajero();
        virtual ~Cajero();
        void setconver_mone();

        int getconver_mone();
        string mostrar_info();

    protected:
        int conver_moneda, salario;

    private:
};

#endif // CAJERO_H
