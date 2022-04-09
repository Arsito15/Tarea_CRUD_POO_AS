#include <iostream>
#include "Register.h"
#include "Estudiante.h"
#define CL system("cls")
#define PA system("pause")
using namespace std;
    int main(int argc, char const *argv[])
    {
        int opcion;
        registro registro;
        do
        {
            CL;
            cout<<"---------------------------------"<<endl;
            cout << "1. Ingreso de estudiante" << endl;
            cout << "2. Mostrar estudiante" << endl;
            cout << "3. Modificar estudiante" << endl;
            cout << "4. Eliminar estudiante" << endl;
            cout << "5. Salir" << endl;
            cout << "Escoga una opcion: ";
            cin >> opcion;
           switch (opcion)
            {
            case 1: 
                CL;
                int a, c;
                string n, d, t;
                 cout<<"---------------------"<<endl;
                cout <<"Ingrese un nombre: ";
                cin >> n;
                cout <<"Ingrese el codigo: ";
                cin >> c;
                cout <<"Ingrese un apellido: ";
                cin >> a;
                cout <<"Ingrese la direccion: ";
                cin >> d;
                cout <<"Ingrese el telefono: ";
                cin >> t;
                Estudiante nueva = Estudiante();
                nueva.actualizar(c, _strdup(n.c_str()), a )
                registro.guardar(nueva);
                PA;
                break;
            case 2:
                CL;
                cout << " |DATOS| " << endl;
                registro.mostrar();
                PA;
                break;
            case 3:
                CL;
                int id;
                cout << "-codigo a modificar: ";
                cin >> id;
                registro.modificar(id);
                PA;
                break;
            case 4:
                CL;
                int id;
                cout << "-codigo a eliminar: ";
                registro.eliminar(id);
                PA;
                break;
            }
        }while(opcion != 5);
    }
