#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &c)
{
    if(cont < LIMIT_ARRAY){
        array[cont] = c;
        cont++;
    }
    else{
        cout << "No hay espacio para mas datos" << endl;
    }
}

void Laboratorio::mostrar()
{
    cout << left;
    cout << setw(20) << "Sistema Operativo";
    cout << setw(16) << "Nombre Equipo";
    cout << setw(14) << "Memoria Ram";
    cout << setw(16) << "Tarjeta Grafica";
    cout << endl;

    for(size_t i = 0; i < cont; i++){
        Computadora &c = array[i];
        cout << c;
        //cout << "Sistema operativo: " << a.getSistemaOperativo() << endl;
        //cout << "Nombre del equipo: " << a.getNombreEquipo() << endl;
        //cout << "Memoria RAM:       " << a.getMemoriaRam() << endl;
        //cout << "Tarjeta grafica:   " << a.getTarjetaGrafica() << endl;
    }
}