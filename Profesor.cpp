#include <iostream>
#include "Profesor.h"
#include "Persona.h"
#include <string>
using namespace std; 

Profesor::Profesor(){
  string nomina = "";
  string departamento = "";
  
}
Profesor::Profesor(string nombre, int edad, int id, string nomina, string departamento):Persona(nombre, edad, id){

  this->nomina = nomina;
  this->departamento = departamento;
  
}
string Profesor::getNomina(){
  return nomina;
}
void Profesor::setNomina(){
  this->nomina = nomina;
}
string Profesor::getDepartamento(){
  return departamento;
}
void Profesor::setDepartamento(){
  this->departamento=departamento;
}
void Profesor::muestraDatos(){
  
  Persona::muestraDatos();
  
  cout<<nomina<<"\n"<<departamento<<"\n";
}