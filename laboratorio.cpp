#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &a)
{
    if(cont < 5){
        array[cont] = a;
        cont++;
    }
    else{
        cout << "No hay espacio para mas datos" << endl;
    }
}

void Laboratorio::mostrar()
{
    for(size_t i = 0; i < cont; i++){
        Computadora &a = array[i];
        cout << "Sistema operativo: " << a.getSistemaOperativo() << endl;
        cout << "Nombre del equipo: " << a.getNombreEquipo() << endl;
        cout << "Memoria RAM:       " << a.getMemoriaRam() << endl;
        cout << "Tarjeta grafica:   " << a.getTarjetaGrafica() << endl;
    }
}