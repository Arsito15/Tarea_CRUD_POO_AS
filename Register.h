#pragma once
#include "Estudiante.h"
#include <windows.h>
#include <fstream>
#include <string>
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class registro
{
    private:
        fstream archivo;
    public:
        void guardar(Estudiante);
        void mostrar();
        void modificar(int);
        void eliminar(int);
};
