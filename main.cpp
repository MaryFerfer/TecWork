#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#include "Aerolinea.h"
#include "Avion.h"
#include "Fecha_Hora.h"


int main() {

  std::string fechaStr;
  std::string horaStr;
  std::string matricula;
  char entrSald;
  std::string aerolineaStr;
  std::string lugar;
  std::string tipoAvion;
  int pasajeros;
  int capacidad;

  Fecha_Hora fechaHora;
  Aerolinea aerolinea;
  Avion avion;
  int ano, mes, dia;
  int horas, minutos;

//arreglos
  Aerolinea arrAerolinea[3000];
  Fecha_Hora arrFechaHora[3000];
  

  //Fecha_Hora(int ano, int mes, int dia, int horas, int minutos);
//Aerolinea(string nombre, string procedencia, Fecha_Hora fechaHora, char salidEntr,string nombreAvion, int capacidadMax, int pasajeros, string matricula)
  int numPorHacer;

  ifstream archivo;

  int cont;
  cont =0;
  int pos1, pos2;
  pos1=0;
  pos2=0;

  int contador = 0;

  int indice = 0;
  archivo.open("dato_vuelos.txt");
 //2020/02/23 00:05 HU-7926 S Hainan_Airlines (TIJ)-Tijuana Boeing-737 79 215
  while (!archivo.eof()){
    archivo >> fechaStr >> horaStr >> matricula >> entrSald>>aerolineaStr>>lugar>>tipoAvion>>pasajeros>>capacidad;
    //fechaStr = str(fechaStr);
    pos1 =fechaStr.find('/');
    ano= std::stoi(string(fechaStr.substr(0,pos1)));
    fechaStr.erase(0,pos1 +1);
    pos1 =fechaStr.find('/');
    mes = std::stoi(string(fechaStr.substr(0,pos1)));
    fechaStr.erase(0, pos1 +1);
    dia = std::stoi(string(fechaStr));
   pos2 =horaStr.find(':');
    horas = std::stoi(string(horaStr.substr(0,pos2)));
    horaStr.erase(0,pos2 + 1);
    minutos = std::stoi(string(horaStr));


    fechaHora = Fecha_Hora(ano,mes,dia,horas,minutos);
    aerolinea = Aerolinea(aerolineaStr,lugar, fechaHora, entrSald,  tipoAvion, capacidad, pasajeros, matricula);
    avion = Avion(tipoAvion, capacidad);

    arrAerolinea[indice] = aerolinea;
    

    arrFechaHora[indice] =fechaHora;

    
    indice ++;
    contador++;


  }

  cout<< "Teclea el número de lo que quieras ver."<<endl;
  cout<<"1) Hora de los días con mayor saturación."<<endl;
  cout<<"2) Cantidad de llegadas por hora promedio. "<<endl;
  cout<<"3)Cantidad de salidas por hora Promedio. "<<endl;
  cout<<"4)Cantidad de llegadas y salidas por aerolinea. "<<endl;
  cout<<"5)Cantidad de pasajeros atendidos por día. "<<endl;
  cout<<"6)Porcentaje promedio de capacidad utilizada en los aviones. "<<endl;
  cout<<"7)Cantidad total de vuelos. "<<endl;

  cin >> numPorHacer;
  //inicios
  dia = arrAerolinea[0].getFechaHora().getDia();
  horas = arrAerolinea[0].getFechaHora().getHoras();

  indice = 0;

  int pasajerosHora = 0;
  int i = 0;

  //variables maximas
  int maxPasajeros= 0;
  int maxHora=0;

  if (numPorHacer == 1){
    while(indice <= contador){
      if (dia == arrAerolinea[indice].getFechaHora().getDia()){
        if (horas == arrAerolinea[indice].getFechaHora().getHoras()){
          pasajerosHora += arrAerolinea[indice].getPasajeros();
          if (pasajerosHora > maxPasajeros){
            maxPasajeros = pasajerosHora;
            maxHora = horas;
             i = indice;
          }
        }else{
          pasajerosHora = arrAerolinea[indice].getPasajeros();
          horas = arrAerolinea[indice].getFechaHora().getHoras();
          if (pasajerosHora > maxPasajeros){
            maxPasajeros=pasajerosHora;
            maxHora = horas;
           }
        }

      }else{
        //dia ++;
        cout << "El número máximo de pasajeros es: "<< maxPasajeros <<" a la hora: "<< maxHora << " en el día "<< arrAerolinea[i].getFechaHora().getDia() <<endl;
          dia = arrAerolinea[indice].getFechaHora().getDia();
          horas = arrAerolinea[indice].getFechaHora().getHoras();
          
          int pasajerosHora = 0, maxHora=0;

          //variables maximas
          int maxPasajeros= 0;

           
      }


      indice++;
    }

  }

  indice = 0;
  //contador tiene la cantidad de dato_vuelos
  int contadorEntradas=0;

 

  dia =arrAerolinea[0].getFechaHora().getDia();
  int contadorDias = 0;
  //llegadas por hora
  int llegadasHora = 0;

  int contadorVPH[24][2];

  //for(int i = 0)

  string salida;
  
  
  int horasVuelosLlegada;
  if (numPorHacer == 2){

    int i=0;
     int numVuelosProm=0;
      
      for(int i = 0; i < contador;i++){
        
        if(arrAerolinea[i].getFechaHora().getHoras()==arrAerolinea[i+1].getFechaHora().getHoras()){
          if(arrAerolinea[i].getSalidEntr() =='A'){
          numVuelosProm++;
          }
        }else{
            horasVuelosLlegada =arrAerolinea[i].getFechaHora().getHoras();
            //despliege
          cout<<"Dia: "<<arrAerolinea[i].getFechaHora().getDia()<<" ";
          cout<<"Hora: "<< horasVuelosLlegada<< " Llegadas: "<< numVuelosProm<<endl;
          //receteo
          numVuelosProm=0;
        }        
        i++;
      }
    
    
    
  }

  int salidasTotales ;

  if (numPorHacer == 3){
    int i=0;
     int numVuelosProm=0;
      
      for(int i = 0; i < contador;i++){
        
        if(arrAerolinea[i].getFechaHora().getHoras()==arrAerolinea[i+1].getFechaHora().getHoras()){
          if(arrAerolinea[i].getSalidEntr() =='S'){
          numVuelosProm++;
          }
        }else{
            horasVuelosLlegada =arrAerolinea[i].getFechaHora().getHoras();
            //despliege
          cout<<"Dia: "<<arrAerolinea[i].getFechaHora().getDia()<<" ";
          cout<<"Hora: "<< horasVuelosLlegada<< " Llegadas: "<< numVuelosProm<<endl;
          //receteo
          numVuelosProm=0;
        }        
        i++;
      }
    
  }

  int pasajTotales=0;
  if (numPorHacer == 4){//cantidad de llegadas y salidas por aerolinea
    for(int i = 0; i < contador;i++){
       if(arrAerolinea[i].getFechaHora().getDia()==arrAerolinea[i+1].getFechaHora().getDia()){

         pasajTotales += arrAerolinea[i].getPasajeros();
          
        }else{
            horasVuelosLlegada =arrAerolinea[i].getFechaHora().getHoras();
            //despliege
          cout<<"Dia: "<<arrAerolinea[i].getFechaHora().getDia()<<" ";
          cout<<"Pasajeros totales: "<< pasajTotales<<endl;
          //receteo
          
        }        
        i++;
    }
 

  }


  if (numPorHacer == 5){//cantidad de pasajeros atendidos por día 
      
  }

  int porcentaje;
  int pasajer = 0;
  int total = 0;



  if (numPorHacer == 6){//procentaje promedio de capacidad de los aviones
    for(i = 0; i<contador;i++){
      pasajer += arrAerolinea[i].getPasajeros();
      total += arrAerolinea[i].getCapacidadMax();

      
    }
    porcentaje = pasajer/(total/100);
    cout << "Cantidad total de pasajeros: "<< pasajer<<" Cantidad total de lugares: "<<total <<" Porcentaje de acientos utilizados: "<< porcentaje<<"%"<<endl;
    
    
  }

  
  if (numPorHacer == 7){
    cout <<"La cantidad total de vuelos fue: "<< contador<<endl;
  }



  
}