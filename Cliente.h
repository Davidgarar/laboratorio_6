#include<iostream>
using namespace::std;
#ifndef CLIENTE_H
#define CLIENTE_H

#include "Persona.h"


class Cliente:public Persona
{
    public:
        Cliente();
        virtual ~Cliente();
        void setti_cuenta();
        void setfecha_nac();
        void setdireccion();
        void setingresos();
        void setall();
        string mostrar_info();

        string getti_cuenta();
        string getfecha_nac();
        string getdireccion();
        int getingresos();

    protected:
        string ti_cuenta, fecha_nac, direccion;
        int ingresos;

    private:
};

#endif // CLIENTE_H
