#ifndef LABORATORIO_H_INCLUDED
#define LABORATORIO_H_INCLUDED

#include <iostream>
#include "computadora.h"

using namespace std;

class Laboratorio
{
    private:
    Computadora array[5];
    size_t cont;
    
    public:
    Laboratorio();
    void agregarComputadora(const Computadora &a);
    void mostrar();
};

#endif //LABORATORIO_H_INCLUDED