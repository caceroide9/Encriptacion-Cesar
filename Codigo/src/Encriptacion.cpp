#include "Encriptacion.h"
#include <iostream>
#include<cstring>
using namespace std;

Encriptacion::Encriptacion(char x,char y){
    cout<<"Ingrese su mensaje"<<endl;
    fflush(stdin);
    cin>>mensaje;
    cout<<"Ingrese su llave"<<endl;
    fflush(stdin);
    cin>>llave;
}

Encriptacion::~Encriptacion()
{
    //dtor
}
void Encriptacion::nuevallave(){
    int i,j;
    int mensajelargo= strlen(mensaje);
    int llavelargo=strlen(llave);
    char nuevaclave[mensajelargo];
     for(i = 0,j=0;i< mensajelargo; i=i+1,j=j+1){
        if(j == llavelargo)
            j = 0;

        nuevaclave[i] =llave[j];
    }
    cout<<"Su nueva clave es: "<<nuevaclave<<endl;}

void Encriptacion::encriptar(){
    int i,j,m;
    int mensajelargo= strlen(mensaje);
    int llavelargo=strlen(llave);
    char mensajeencrip[mensajelargo],nuevaclave[mensajelargo];
    for(i = 0,j=0;i< mensajelargo; i=i+1,j=j+1){
        if(j == llavelargo)
            j = 0;

        nuevaclave[i] =llave[j];
    }
    for(m= 0;m< mensajelargo;m=m+1){
        mensajeencrip[m] = ((mensaje[m] + nuevaclave[m]) % 26) + 'A';}

   cout<<"Su mensaje encriptado: "<<mensajeencrip<<endl;}

void Encriptacion::desincriptar(){
    int i,j=0,m,a;
    int mensajelargo= strlen(mensaje);
    int llavelargo=strlen(llave);
    char mensajeencrip[mensajelargo]={'0'},nuevaclave[mensajelargo]={'0'},descifradomensaje[mensajelargo]={'0'};
    for(i = 0;i< mensajelargo; i=i+1){
        if(j == llavelargo){
                j = 0;
        }
        j=j+1;
        nuevaclave[i] =llave[j];

    }
    for(m= 0;m< mensajelargo;m=m+1){
        mensajeencrip[m] = ((mensaje[m] + nuevaclave[m]) % 26)+'A';}
    for(a=0 ;a < mensajelargo;a=a+1){
        descifradomensaje[a]= ((((mensajeencrip[a]-nuevaclave[a])+26)%26)+'A');}
    cout<<"Mensaje descifrado: "<<descifradomensaje<<endl;
    }

Encriptacion::Encriptacion(const Encriptacion& other)
{
    //copy ctor
}
