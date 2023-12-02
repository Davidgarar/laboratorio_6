#include <iostream>
#include<vector>
#include <cstdlib>
#include "Persona.h"
#include "Cliente.h"
#include "Cajero.h"


using namespace std;

vector<Persona> personas;
vector<Cliente> clientes;
vector<Cajero> cajeros;

void menu();
void submenu();
void listar(bool);
void listarcliente(bool);





void menu(){
    int opcion;
    Persona objp("juan", "garcia", 1111,333);
    personas.push_back(objp);


    do {
        //system("cls");
        cout << "1.Adicionar constructor con argumentos predeterminados. " << endl;
        cout << "2.Listar, se muestra un submenu. " << endl;
        cout << "3. Acerca del programador. " << endl;
        cout << "4.Salir. " << endl;
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout<<"Mostrando constructo con argumentos predeterminados " << endl;
                cout<<endl;

                cout<<"Otro " << endl;
                objp.mostrar_info();
                break;
            case 2:
                cout << "Submenu " << endl;
                submenu();
                break;
            case 3:
                cin.ignore();
                cout << "Acerca del programador " << endl;
                cout << " Programador " << endl;
                cout << "David Garcia -- 2359450 " << endl;
                break;
            case 4:
                cout << "Saliendo " << endl;
                break;
            default:
                cout << "La opcion no existe " << endl;
        }
    } while(opcion != 4);
}

void submenu(){
     system("cls");
     int subopcion;
     Persona objp;
     Cliente objc;
     cout << "3.Listar " << endl;
     cout << "Seleccione la entidad a listar:" << endl;
     cout << "1. Persona" << endl;
     cout << "2. Cliente" << endl;
     cout << "3. Cajero" << endl;
     cin >> subopcion;


     switch (subopcion) {
         case 1:
             cout<<endl;
             listar(true);
             cout<<endl;
             break;
         case 2:
             int sopcion;
             do{
             cout<<"1. Crear cliente " << endl;
             cout<<"2. listar "<< endl;
             cin>>sopcion;
             switch(sopcion){
             case 1:
                /*objc.setnombre();
                objc.setapellido();
                objc.setcedula();
                objc.settelefono();
                objc.setedad();
                objc.setsalario();
                objc.setti_cuenta();*/
                objc.setall();
                clientes.push_back(objc);
                break;
             case 2 :
                listarcliente(true);
                break;
             default:
                cout<<"la opcion no existe" << endl;
                break;
             }
             }while(sopcion!=3);

             break;
         case 3:
             break;
         default:
             cout << "Opción no válida" << endl;
             break;
                }
}


void listar(bool tipo){
    int n = personas.size();
    if(n > 0){
        if(tipo){ // se recorre el vector de forma tradicional
            Persona objp; //
            cout<<"\nListado de personas (for tradicional)\n\n";
            for(int i = 0; i < n; i++){     // el for usa una variable para el indice del vector
                objp = personas.at(i);

                cout<<objp.mostrar_info()<<endl<<endl;//x

            }
        }else{
            cout<<"\nListado de personas (for auto)\n\n";
            for(auto objp: personas){  // el for no usa una variable para el indice del vector.
                                            // auto detecta de forma automatica el tipo de objeto necesario
                                            // Tambien en vez de auto, se puede colocar el nombre de la clase especifica, por eje: for(Estudiante obj: vecEstudiantes){....}
                cout<<objp.mostrar_info()<<endl<<endl;
            }
        }
    }else{
        cout<<"\nNo hay estudiantes para listar\n\n";
    }
}

void listarcliente(bool tipo){
    int n = clientes.size();
    if(n > 0){
        if(tipo){ // se recorre el vector de forma tradicional
            Cliente objc;
            cout<<"\nListado de personas (for tradicional)\n\n";
            for(int i = 0; i < n; i++){     // el for usa una variable para el indice del vector
                objc = clientes.at(i);
                cout<<objc.mostrar_info()<<endl<<endl;
            }
        }else{
            cout<<"\nListado de clientes (for auto)\n\n";
            for(auto objc: clientes){  // el for no usa una variable para el indice del vector.
                                            // auto detecta de forma automatica el tipo de objeto necesario
                                            // Tambien en vez de auto, se puede colocar el nombre de la clase especifica, por eje: for(Estudiante obj: vecEstudiantes){....}
                cout<<objc.mostrar_info()<<endl<<endl;
            }
        }
    }else{
        cout<<"\nNo hay clientes para listar\n\n";
    }
}



int main() {
   cout<<"hola"<<endl;
   menu();
   return 0;
}
