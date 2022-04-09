#include "Register.h"
#include <iostream>
void registro::guardar(Estudiante estudiante)
{
    this -> archivo.open("estudiantes.dat", ios::out | ios::app);
    if (this -> archivo.fail())
    {
    	cout<<"---------------------------------"<<endl;
        cout << "-Error al abrir el archivo-" << endl;
    }
    else
    {
        this -> archivo.write((char*)&estudiante, sizeof(Estudiante));
        this -> archivo.close();
        cout<<"---------------------------------"<<endl;
        cout << "-Estudiante guardado exitosamente-" << endl;
    }
}
void registro::mostrar()
{
    Estudiante mostrar = Estudiante();
    this -> archivo.open("estudiantes.dat", ios::in);
    if (this -> archivo.fail())
    {
    	cout<<"---------------------------------"<<endl;
        cout << "-Error al abrir el archivo-" << endl;
    }
    else
    {
        while (!this -> archivo.eof())
        {
            this -> archivo.read((char*)&mostrar, sizeof(Estudiante));
            if (!this -> archivo.eof())
            {
                mostrar.imprimir();
            }
        }
        this -> archivo.close();
    }
}
void registro::modificar(int codigo)
{
    bool encontrado = false;
    Estudiante aux;
    ifstream lectura; ofstream escritura;
    lectura.open("estudiantes.dat", ios::in);
    escritura.open("aux.dat", ios::app);
    if (lectura.fail() || escritura.fail())
    {
    	cout<<"---------------------------------"<<endl;
        cout << "-Error abrir el archivo-" << endl;
    }
    else
    {
        while(lectura.read((char*)&aux, sizeof(aux)))
        {
            if (aux.getCodigo() == codigo)
            {
                encontrado = true;
                int a, c;
                string n;
                 cout<<"---------------------------------"<<endl;
                cout <<"Ingrese nombre: ";
                cin >> n;
                cout <<"Ingrese codigo: ";
                cin >> c;
                cout <<"Ingrese apellido: ";
                cin >> a;
                aux.actualizar(c, _strdup(n.c_str(), a);
                escritura.write((char*)&aux, sizeof(aux));
            }
            else
            {
                escritura.write((char*)&aux, sizeof(aux));
            }
        }
        lectura.close();
        escritura.close();
        remove("estudiantes.dat");
        if (rename("aux.dat", "estudiantes.dat"))
        {
        	 cout<<"---------------------------------"<<endl;
            cout << "-Error al renombrar el archivo-" << endl;
        }
        if (!encontrado) {
        	 cout<<"---------------------------------"<<endl;
            cout << "-Error al buscar el estudiante-" << endl;
        }else {
        	 cout<<"---------------------------------"<<endl;
            cout << "-Estudiante modificado exitosamente-" << endl;
        }
    }
}    
void registro::eliminar(int codigo)
{
      bool encontrado = false;
    Estudiante aux;
    ifstream lectura; ofstream escritura;
    lectura.open("estudiantes.dat", ios::in);
    escritura.open("aux.dat", ios::app);
    if (lectura.fail() || escritura.fail())
    {
    	 cout<<"---------------------------------"<<endl;
        cout << "-Error al abrir el archivo-" << endl;
    }
    else
    {
        while(lectura.read((char*)&aux, sizeof(aux)))
        {
            if (aux.obtenerCodigo() != codigo)
            {
                escritura.write((char*)&aux, sizeof(aux));
            }
            else
            {
               encontrado = true;
            }
        }
        lectura.close();
        escritura.close();
        remove("estudiantes.dat");
        if (rename("aux.dat", "estudiantes.dat"))
        {
        	 cout<<"---------------------------------"<<endl;
            cout << "-Error al renombrar el archivo-" << endl;
        }
        if (!encontrado) {
        	 cout<<"---------------------------------"<<endl;
            cout << "-Error al buscar el estudiante-" << endl;
        }else {
        	 cout<<"---------------------------------"<<endl;
            cout << "-Estudiante modificado exitosamente-" << endl;
        }
    }

}
