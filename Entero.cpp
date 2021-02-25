#include "Entero.h"
#include <iostream>

using namespace std;

Entero::Entero(int id,int valor){
    this->id=id;
    this->contenedor=valor;
}

void Entero::setSiguiente(Entero* sig){
    this->siguiente = sig;
}

Entero* Entero::getSiguiente(){
    return this->siguiente;
}

int Entero::getId(){
    return this->id;
}
int Entero::getValor(){
    return this->contenedor;
}
