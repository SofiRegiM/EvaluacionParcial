#include <iostream>
#include "Estudiante.h"
#include "Persona.h"
#include <string>
using namespace std; 

Estudiante::Estudiante(){
  string matricula = "";
  string planestudios = "";
}
Estudiante::Estudiante(string nombre, int edad, int id, string matricula, string planestudios): Persona(nombre, edad, id){

  
  this->matricula = matricula;
  this->planestudios = planestudios;
  
}
string Estudiante::getMatricula(){
  return matricula;
}
void Estudiante::setMatricula(){
  this->matricula=matricula;
}
string Estudiante::getPlanDeEstudios(){
  return planestudios;
}
void Estudiante::setPlanDeEstudios(){
  this->planestudios=planestudios;
}
void Estudiante::muestraDatos(){

  Persona::muestraDatos();
  
  cout<< matricula<<"\n"<<planestudios<<"\n";
}