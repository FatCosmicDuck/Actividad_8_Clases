#include <fstream>
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

void Laboratorio::respaldarTabla(){

    ofstream archivo("RespaldoTabla.txt");

    if(archivo.is_open()){

        archivo << left;
        archivo << setw(20) << "Sistema Operativo";
        archivo << setw(16) << "Nombre Equipo";
        archivo << setw(14) << "Memoria Ram";
        archivo << setw(16) << "Tarjeta Grafica";
        archivo << endl;

        for (size_t i = 0; i < cont; i++){
            Computadora &c = array[i];
            archivo << c;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar(){

    ofstream archivo("RespaldoDeComputadoras.txt");
    
    if(archivo.is_open()){

        for (size_t i = 0; i < cont; i++){
            Computadora &c = array[i];
            archivo << c.getSistemaOperativo() << endl;
            archivo << c.getNombreEquipo() << endl;
            archivo << c.getMemoriaRam() << endl;
            archivo << c.getTarjetaGrafica() << endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar(){
    ifstream archivo("RespaldoDeComputadoras.txt");
    if(archivo.is_open()){
        string tempString;
        int tempInt;
        Computadora c;

        while(true){
            getline(archivo, tempString); //Sistema Operativo
            if(archivo.eof()){
                break;
            }
            c.setSistemaOperativo(tempString);

            getline(archivo, tempString); //Nombre Equipo
            c.setNombreEquipo(tempString);

            getline(archivo, tempString); //Memoria Ram
            tempInt = stoi(tempString);
            c.setMemoriaRam(tempInt);

            getline(archivo, tempString); //Tarjeta Grafica
            tempInt = stoi(tempString);               
            c.setTarjetaGrafica(tempInt);

            agregarComputadora(c);

        }
    }
    archivo.close();
}