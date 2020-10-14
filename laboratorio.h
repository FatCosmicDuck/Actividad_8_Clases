#ifndef LABORATORIO_H_INCLUDED
#define LABORATORIO_H_INCLUDED

#include <iostream>
#include "computadora.h"

#define LIMIT_ARRAY 10

using namespace std;

class Laboratorio
{
    private:
    Computadora array[LIMIT_ARRAY];
    size_t cont;
    
    public:
    Laboratorio();
    void agregarComputadora(const Computadora &c);
    void mostrar();

    friend Laboratorio& operator<<(Laboratorio &l, const Computadora &c){
        l.agregarComputadora(c);
        return l;
    }
};

#endif //LABORATORIO_H_INCLUDED