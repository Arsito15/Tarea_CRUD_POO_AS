#include "Estudiante.h"
#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
Estudiante::Estudiante()
{
    this -> code = 0;
    this -> dire = 0;
    this -> tel = 0;
    strncpy_s(this -> nom, "\0");
    strncpy_s(this -> ape, "\0");
}
void Estudiante::actualizar(int code, char nom[20], char ape[20], int dire, int tel)
{
    this -> code = c;
    this -> dire = d;
    this -> tel = t;
    strncpy_s(this -> nom, n);
    strncpy_s(this -> ape, a);
}
void Estudiante::imprimir()
{
    cout << "Codigo: " << this -> code << endl;
    	cout << "Nombre: " << this -> nom << endl;
    		cout << "Apellido: " << this -> ape << endl;
    		cout << "Direccion: " << this -> dire << endl;
    			cout << "Telefono: " << this -> tel << endl;
}
int Estudiante::getCode()
{
    return this -> code;
}
