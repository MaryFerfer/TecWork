/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//#include "Hora.h"
//#include "Fecha.h"
#include "FechaHora.h"
int main() {
  FechaHora fecha; 
  string fechaStr;
  string horaStr;
  string vuelo;
  char es;//entrada a salida
  string aerolinea;
  string destino;
  string avion;
  int pasajeros;
  int capacidad;
  int horas[24]={0};
  int anoAnt=0;
  int mesAnt=0;
  int diaAnt= 0;
  int cantDias;

  ifstream archivo;

  archivo.open("datos_vuelos.txt");

  while (archivo >> fechaStr >> hora>> vuelo >> es>>aerolinea>>destino>>avion>>pasajeros>>capacidad){
    fechaStr = fechaStr + " "+horaStr;
    fecha = FechaHora(fechaStr);
    if(anoAnt != fecha.getAno() && mesAnt != fecha.getMes() && diaAnt != fecha.getDia()){
      cantDias++;

      anoAnt = fecha.getAno();
      mesAnt = fecha.getMes();
      diaAnt = fecha.getDia();
    }
    if(es = 'A'){
      horas[fecha.getHora()]++;
    }


  }
  archivo.close();

  for (int i=0;i<24;i++){
    cout<<"Hora:"<<i<<" vuelos: "<<horas[i]<<" promedio:"<<horas;
  }

  return 0;
}
*/