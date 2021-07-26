#ifndef VIGNERE_H
#define VIGNERE_H
#include <iostream>
#include<cstring>
#include <string.h>
using namespace std;

class VIGNERE
{
    public:
        VIGNERE();
        VIGNERE(char,char);
        VIGNERE(char);
        virtual ~VIGNERE();

        char* Getmensaje() { return mensaje; }
        void Setmensaje(char *val) { strcpy(mensaje,val); }
        char* Getclave() { return clave; }
        void Setclave(char *val) { strcpy(clave,val); }
        void ver();
        void Codificar();
        void Encriptar();
        void Desencriptar();

    protected:

    private:
        char mensaje[999];
        char clave[999];

};

#endif // VIGNERE_H
