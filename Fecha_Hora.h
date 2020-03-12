#ifndef Fecha_hora_h
#define Fecha_hora_h

class Fecha_Hora{
private:
  int ano;
  int mes;
  int dia;
  int horas; 
  int minutos;
public:
  Fecha_Hora();
  Fecha_Hora(int ano, int mes, int dia, int horas, int minutos);
 
  int getAno();
  int getMes();
  int getDia();
  int getHoras();
  int getMinutos();


  void setAno(int ano);
  void setMes(int mes);
  void setDia(int dia);
  void setHoras(int horas);
  void setMinutos(int minutos);
  void show();

};


Fecha_Hora::Fecha_Hora(){
  ano = 0;
  mes = 0;
  dia = 0;
  horas = 0;
  minutos =0;
}

Fecha_Hora::Fecha_Hora(int ano, int mes, int dia, int horas, int minutos){
  this->ano=ano;
  this->mes=mes;
  this->dia=dia;
  this->horas=horas;
  this->minutos=minutos;

}


int Fecha_Hora::getAno(){
  return ano;
}

int Fecha_Hora::getMes(){
  return mes;
}

int Fecha_Hora::getDia(){
  return dia;
}

int Fecha_Hora::getHoras(){
  return horas;
}

int Fecha_Hora::getMinutos(){
  return minutos;
}

void Fecha_Hora::setAno(int ano){
  this->ano=ano;
}

void Fecha_Hora::setMes(int mes){
  this->mes=mes;
}

void Fecha_Hora::setDia(int dia){
  this ->dia=dia;
}

void Fecha_Hora::setHoras(int horas){
  this->horas=horas;
}
void Fecha_Hora::setMinutos(int minutos){
  this->minutos=minutos;
}

void Fecha_Hora::show(){
  cout <<ano<<"/"<<mes<<"/"<<dia<<" "<<horas<<":"<<minutos<<" "<<endl;

}



#endif