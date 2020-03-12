/*#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int mainh() {

  
  string fechaStr;
  string horaStr;
  string matricula;
  string entrSald;
  string aerolinea;
  string lugar;
  string tipoAvion;
  int pasajeros;
  int capacidad;
  
  int ano, mes, dia;

  //Fecha_Hora(int ano, int mes, int dia, int horas, int minutos);

  int numPorHacer;

  ifstream archivo;

  int cont;

  int pos;
  cont =0;

  //archivo.open("dato_vuelos.txt");
 //2020/02/23 00:05 HU-7926 S Hainan_Airlines (TIJ)-Tijuana Boeing-737 79 215
    fechaStr = "020/02/23";
    pos =fechaStr.find('/');
    ano= std::stoi(fechaStr.substr(0,pos));
    fechaStr.erase(0,pos +1);
    mes = std::stoi(fechaStr.find('/'));
    fechaStr.erase(0, pos +1);
    dia = std::stoi(fechaStr);
    
    cout << dia<<endl;
    
  }
}*/