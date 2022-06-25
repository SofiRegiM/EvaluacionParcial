#include <iostream>
#include "Persona.h"
#include <string>
using namespace std; 

Persona::Persona(){
  nombre = "";
  edad = 0;
  id = 0;
}
Persona::Persona(string nombre, int edad, int id){
  this->nombre=nombre;
  this->edad=edad;
  this->id=id;
}

void Persona::muestraDatos(){
  cout<<"\n";
  cout<<"La persona "<<id<<" es la siguiente: "<<endl;
  cout<<nombre<<"\n"<<edad<<"\n";
}
string Persona::getNombre(){
  return nombre;
}
void Persona::setNombre(){
  this->nombre=nombre;
}
int Persona::getEdad(){
  return edad;
}
void Persona::setEdad(){
  this->edad=edad;
}