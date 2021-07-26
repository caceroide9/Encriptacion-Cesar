#include "VIGNERE.h"
#include <iostream>
#include<cstring>
#include <string.h>
using namespace std;

VIGNERE::VIGNERE()
{
    char *mensaje="";
    char *clave="TAQUION";
}

VIGNERE::VIGNERE(char x,char y)
{
    cout<<"Ingrese la palabra a encriptar (SIN ESPACIOS EN BLANCO) : ";
    cin>>mensaje;
    cout<<"Ingrese la clave para encriptar la palabra (NO SE PUEDEN REPETIR LAS LETRAS; EJ:''TAQUION'') ";
    cin>>clave;
}

VIGNERE::VIGNERE(char x){
    cout<<"Ingrese la palabra a encriptar : ";
    cin>>mensaje;
    char clave[]="TAQUION";}

void VIGNERE::Codificar(){
   int i,j;
    int mensajelargo= strlen(mensaje);
    int llavelargo=strlen(clave);
    char nuevaclave[mensajelargo];
     for(i = 0,j=0;i< mensajelargo; i=i+1,j=j+1){
        if(j == llavelargo)
            j = 0;

        nuevaclave[i] =clave[j];
    }
        nuevaclave[i]='\0';
        cout<<"Su mensaje codificado es : "<<nuevaclave<<endl;
}

void VIGNERE::Encriptar(){
   int i,j,m;
    int mensajelargo= strlen(mensaje);
    int llavelargo=strlen(clave);
    char mensajeencrip[mensajelargo],nuevaclave[mensajelargo];
    for(i = 0,j=0;i< mensajelargo; i=i+1,j=j+1){
        if(j == llavelargo)
            j = 0;

        nuevaclave[i] =clave[j];
    }
    for(m= 0;m< mensajelargo;m=m+1){
        mensajeencrip[m] = ((mensaje[m] + nuevaclave[m]) % 26) + 'A';}
        mensajeencrip[m]='\0';
    cout<<"Su mensaje encriptado es : "<<mensajeencrip<<endl;
}

void VIGNERE::Desencriptar(){
    int i,j,m,a;
    int mensajelargo= strlen(mensaje);
    int llavelargo=strlen(clave);
    char mensajeencrip[mensajelargo],nuevaclave[mensajelargo],descifradomensaje[mensajelargo];
    for(i = 0,j=0;i< mensajelargo; i=i+1,j=j+1){
        if(j == llavelargo)
            j = 0;

        nuevaclave[i] =clave[j];
    }
    for(m= 0;m< mensajelargo;m=m+1){
        mensajeencrip[m] = ((mensaje[m] + nuevaclave[m]) % 26) + 'A';}
    for(a=0 ;a < mensajelargo;a=a+1){
        descifradomensaje[a] = (((mensajeencrip[a] - nuevaclave[a]) + 26) % 26) + 'A';}
        descifradomensaje[a]='\0';
    cout<<"Su mensaje desencriptado es : "<<descifradomensaje;}




/*void VIGNERE::ver()
{
    char x=Getmensaje();
    char y=Getclave();
    cout<<"Su palabra a encriptar es ",Getmensaje()<<endl;
    cout<<"Su clave a encriptar es '",y<<endl;
}*/



VIGNERE::~VIGNERE()
{
    //dtor
}
