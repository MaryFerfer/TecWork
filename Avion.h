#ifndef Avion_h
#define Avion_h

class Avion{
private:

  string tipoAvion;
  int pasajeros;

  //char salidaEntrada;
public:
  Avion();
  Avion( string tipoAvion, int pasajeros);

  string getTipoAvion();
  int getPasajeros();
 
  //char getSalidaEntrada();

  
  void setTipoAvion(string tipoAvion);
  void setPasajeros(int pasajeros);
  
  //void setSalidaEntrada(char salidaEntrada);
  void show();

};

Avion::Avion(){
 
  tipoAvion = "";
  pasajeros = 0;

  //salidaEntrada =' ';
}

Avion::Avion( string tipoAvion, int pasajeros ){

  this->tipoAvion=tipoAvion;
  this->pasajeros=pasajeros;
 
 // this->salidaEntrada=salidaEntrada;
}



string Avion::getTipoAvion(){
  return tipoAvion;
}

int Avion::getPasajeros(){
  return pasajeros;
}

/*
char Avion::getSalidaEntrada(){
  return salidaEntrada;
}
*/



void Avion::setTipoAvion(string tipoAvion){
  this->tipoAvion=tipoAvion;
}

void Avion::setPasajeros(int pasajeros){
  this->pasajeros=pasajeros;
}


/*
void Avion::setSalidaEntrada(char salidaEntrada){
  this->salidaEntrada=salidaEntrada;
}
*/
void Avion::show(){
  cout<<tipoAvion<<"-"<<pasajeros<<" "<<endl;
}

#endif