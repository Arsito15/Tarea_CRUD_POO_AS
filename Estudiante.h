#pragma once
using namespace std;
class Estudiante
{
    private:
        int code[10];
        char nom[20];
        char ape[20];
        int dire[20];
        int tel[10];
    public:
        Estudiante();
        void actualizar(int, char[20], char[20], int[20], int[10]);
        void imprimir();
        int getCode();
};
