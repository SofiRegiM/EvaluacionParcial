#ifndef Estudiante_h
#define Estudiante_h
#include <string>
#include "Persona.h"
using namespace std;

class Estudiante: public Persona{

  private:
    string matricula;
    string planestudios;

  public:
   Estudiante();
   Estudiante(string, int, int, string, string);
   string getMatricula();
   void setMatricula();
   string getPlanDeEstudios();
   void setPlanDeEstudios();
   void muestraDatos();
};

#endif