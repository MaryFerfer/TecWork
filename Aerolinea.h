#ifndef Aerolinea_h
#define Aerolinea_h
#include "Fecha_Hora.h"
#include "Avion.h"


class Aerolinea{
private:
  string nombre;
  string procedencia;

  string matricula;
  Fecha_Hora fechaHora;
  char salidEntr;
  string nombreAvion;
  int capacidadMax;
  int pasajeros;

public:
  Aerolinea();
  Aerolinea(string nombre, string procedencia,  Fecha_Hora fechaHora, char salidEntr, string nombreAvion, int capacidadMax, int pasajeros, string matricula);

  string getNombre();
  string getProcedencia();
  string getMatricula();
  Fecha_Hora getFechaHora() ;
  char getSalidEntr();
  string getNombreAvion();
  int getCapacidadMax();
  int getPasajeros();


  void setNombre(string nombre);
  void setProcedencia(string procedencia);
  void setSalidEntr(char salidEntr);
  void setMatricula(string matricula);
  void setFechaHora(Fecha_Hora fechaHora);
  void setNombreAvion(string nombreAvion);
  void setCapacidadMax(int capacidadMax);
  void setPasajeros(int pasajeros);
  void show();


};

Aerolinea::Aerolinea(): fechaHora(){
  nombre = "";
  procedencia = "";
  salidEntr = ' ';
  matricula = "";
  nombreAvion = "";
  capacidadMax = 0;
  pasajeros = 0;
  
}

Aerolinea::Aerolinea(string nombre, string procedencia, Fecha_Hora fechaHora, char salidEntr,string nombreAvion, int capacidadMax, int pasajeros, string matricula){
  this->fechaHora=fechaHora;
  this->nombre=nombre;
  this->procedencia=procedencia;
  this->salidEntr=salidEntr;
  this->matricula=matricula;
  this->nombreAvion=nombreAvion;
  this->capacidadMax=capacidadMax;
  this-> pasajeros=pasajeros;
}

string Aerolinea::getNombreAvion(){
  return nombreAvion;
}

int Aerolinea::getCapacidadMax(){
  return capacidadMax;
}

int Aerolinea::getPasajeros(){
  return pasajeros;
}

string Aerolinea::getNombre(){
  return nombre;
}

string Aerolinea::getProcedencia(){
  return procedencia;
}



string Aerolinea::getMatricula(){
  return matricula;
}

Fecha_Hora Aerolinea::getFechaHora(){
  return fechaHora;
}

char Aerolinea::getSalidEntr(){
  return salidEntr;
}

void Aerolinea::setNombre(string nombre){
  this->nombre=nombre;
}

void Aerolinea::setProcedencia(string procedencia){
  this->procedencia=procedencia;
}


void Aerolinea::setMatricula(string matricula){
  this->matricula=matricula;
}

void Aerolinea::setFechaHora(Fecha_Hora fechaHora){
  this->fechaHora=fechaHora;
}

void Aerolinea::setSalidEntr(char salidEntr){
  this-> salidEntr=salidEntr;
}

void Aerolinea::setNombreAvion(string nombreAvion){
  this->nombreAvion=nombreAvion;
}

void Aerolinea::setCapacidadMax(int capacidadMax){
  this->capacidadMax=capacidadMax;
}

void Aerolinea::setPasajeros(int pasajeros){
  this->pasajeros=pasajeros;
}


void Aerolinea::show(){
  fechaHora.show();
  cout<<matricula <<" "<< salidEntr<< " "<<nombre <<" "<<procedencia<<" "<<nombreAvion<<" "<<capacidadMax<<" "<<pasajeros<<endl;
}


#endif