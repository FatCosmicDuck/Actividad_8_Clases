#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED

#include <iostream>
using namespace std;

class Computadora
{
    private:
    string sistemaOperativo;
    string nombreEquipo;
    int memoriaRam;
    int tarjetaGrafica;

    public:
    Computadora();
    Computadora(const string &sistemaOperativo, const string &nombreEquipo, int memoriaRam, int tarjetaGrafica);
    
    void setSistemaOperativo(const string &c);
    void setNombreEquipo(const string &c);
    void setMemoriaRam(const int &c);
    void setTarjetaGrafica(const int &c);

    string getSistemaOperativo();
    string getNombreEquipo();
    int getMemoriaRam();
    int getTarjetaGrafica();


};

#endif //COMPUTADORA_H_INCLUDED