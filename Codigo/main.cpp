#include <iostream>"
#include "Encriptacion.h"

using namespace std;

int main(){
    char x,y;
    Encriptacion A(x,y);
    A.nuevallave();
    A.encriptar();
    A.desincriptar();
    return 0;
}
