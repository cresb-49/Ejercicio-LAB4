#ifndef ENTERO_H
#define ENTERO_H

class Entero
{
private:
    int id;
    int contenedor;
    Entero* siguiente;
public:
    Entero(int,int);
    void setSiguiente(Entero*);
    Entero* getSiguiente();
    int getId();
    int getValor();
};

#endif /*ENTERO_H*/