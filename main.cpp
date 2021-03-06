#include <iostream>
#include "laboratorio.h"

using namespace std;

int main(){
    //EL SEGUNDO PASO ES RECUPERAR DE LOS ARCHIVOS DE RESPALDO
    /*
    Laboratorio l;
    l.recuperar();
    l.mostrar();
    */
    
    //PRIMERO SE TIENEN QUE GENERAR LOS ARCHIVOS DE RESPALDO
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

    //Metodo de Sobrecarga
    //Ejemplo 6
    Computadora c_06;
    cin >> c_06;
    cout << c_06;
    cin.get();
    Computadora c_07;
    cin >> c_07;
    cin.get();
    Computadora c_08;
    cin >> c_08;
    cin.get();


    //Agregar computadoras
    Laboratorio lb;
    lb.agregarComputadora(c_01);
    lb.agregarComputadora(c_02);
    lb.agregarComputadora(c_03);
    lb.agregarComputadora(c_04);
    lb.agregarComputadora(c_05);
    lb.agregarComputadora(c_06);
    lb << c_07 << c_08;

    //Mostrar tabla
    lb.mostrar();
    
    //Crear respaldo de tabla
    lb.respaldarTabla();

    //Crear respaldo de linea por linea
    lb.respaldar();
    

    return 0;
}