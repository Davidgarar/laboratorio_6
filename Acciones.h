#ifndef ACCIONES_H
#define ACCIONES_H


class Acciones
{
    public:
        int cant_horas, cant_saldo, prestamo;
        string nivel_estu, correo, movimientos;

        Acciones();
        virtual ~Acciones();
        void setcant_horas();
        void setcant_saldo();
        void setprestamo();
        void setnivel_estu();
        void setcorreo();
        void setmovimientos();

        int getcant_horas();
        int getcant_saldo();
        int getprestamo();
        string getnivel_estu();
        string getcorreo();
        string getmovimientos();

    protected:

    private:
};

#endif // ACCIONES_H
