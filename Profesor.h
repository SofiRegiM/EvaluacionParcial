#ifndef Profesor_h
#define Profesor_h
#include <string>
#include "Persona.h"
using namespace std;

class Profesor: public Persona{

  private:
    string nomina;
    string departamento;

  public:
    Profesor();
    Profesor(string, int, int, string, string);
    string getNomina();
    void setNomina();
    string getDepartamento();
    void setDepartamento();
    void muestraDatos();
   
};



#endif