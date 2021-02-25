#include <iostream>
#include <cstdlib>
#include "Entero.h"

typedef Entero* entero;
using namespace std;

void agregarEntero(entero nuevo);
void imprimirLista();


entero numeros = NULL;

int main(){
    entero num1 = new Entero(1,1);
    entero num2 = new Entero(2,2);
    entero num3 = new Entero(3,3);
    entero num4 = new Entero(4,4);
    entero num5 = new Entero(5,5);
    
    agregarEntero(num1);
    agregarEntero(num2);
    agregarEntero(num3);
    agregarEntero(num4);
    agregarEntero(num5);

    cout << "Datos de la lista" << endl;
    imprimirLista();

    return 0;
}

void agregarEntero(entero nuevo){
    nuevo->setSiguiente(NULL);
    if(numeros == NULL){
        numeros = nuevo;
    }else{
        entero tmp = numeros;
        while (tmp->getSiguiente()!=NULL)
        {
            tmp = tmp->getSiguiente();
        }
        tmp->setSiguiente(nuevo);
    }
}

void imprimirLista(){
    if(numeros == NULL){
        cout << "La lista esta vacia" << endl;
    }else{
        entero tmp = numeros;
        while (tmp!=NULL)
        {
            printf("Entero id: %d, valor: %d\n",tmp->getId(),tmp->getValor());
            tmp = tmp->getSiguiente();
        }
        
    }
}
