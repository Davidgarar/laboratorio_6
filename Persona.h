#include<iostream>
using namespace::std;

#ifndef PERSONA_H
#define PERSONA_H


class Persona
{
    public:
        Persona(string = "",string = "", long = 0, long = 0, int = 0, int= 1);
        virtual ~Persona();

        virtual string mostrar_info();
        void setnombre();
        void setapellido();
        void setcedula();
        void settelefono();
        void setedad();
        void setsalario();

        string getnombre();
        string getapellido();
        long getcedula();
        long gettelefono();
        int getedad();
        int getsalario();

    protected:
        string nombre, apellido;
        long cedula, telefono;
        int edad, salario;


    private:
};

#endif // PERSONA_H
