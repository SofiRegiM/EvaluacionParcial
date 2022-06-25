#include <iostream>
#include <string>
#include "Estudiante.h"
#include "Persona.h"
#include "Profesor.h"
using namespace std;


int main() {

  Persona *Personas[4];
  
  Personas[0] = new Estudiante("Sofia",19, 328, "A01721807", "ITC");
  
  Personas[1] = new Estudiante("Ernesto",20, 212, "A01722098", "IDM");
  
  Personas[2] = new Profesor("Julia",32, 198, "1251", "Ciencias");
  
  Personas[3] = new Profesor("Francisco",56, 132, "1488", "Matemáticas");
  
  for (int i=0; i<4; i++){
    Persona *personitas = Personas[i];
    personitas->muestraDatos();
    
    
  }
  delete[] *Personas;
  
}