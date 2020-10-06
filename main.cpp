#include <iostream>
#include "laboratorio.h"

using namespace std;

int main(){
    //Metodo parametrizado
    //Ejemplo 1
    Computadora c_01 = Computadora("Windows", "CarlosXD", 4, 1);
    //Ejemplo 2
    Computadora c_02 = Computadora("Mac", "CosmicDuck", 8, 2);
    //Ejemplo 3
    Computadora c_03 = Computadora("Linux", "Luis034", 8, 2);

    //Metodo de acceso
    //Ejemplo 4
    Computadora c_04;
    c_04.setSistemaOperativo("Ubuntu");
    c_04.setNombreEquipo("Mel");
    c_04.setMemoriaRam(4);
    c_04.setTarjetaGrafica(1);
    //Ejemplo 5
    Computadora c_05;
    c_05.setSistemaOperativo("Windows");
    c_05.setNombreEquipo("Bodoque");
    c_05.setMemoriaRam(4);
    c_05.setTarjetaGrafica(2);

    //Agregar y mostrar
    Laboratorio lb;
    lb.agregarComputadora(c_01);
    lb.agregarComputadora(c_02);
    lb.agregarComputadora(c_03);
    lb.agregarComputadora(c_04);
    lb.agregarComputadora(c_05);
    lb.mostrar();

    return 0;
}