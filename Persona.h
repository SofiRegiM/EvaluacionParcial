#ifndef Persona_h
#define Persona_h
#include <string>
using namespace std;

class Persona{

  private:
    string nombre;
    int edad;
    int id;

  public:
    Persona();
    Persona(string, int, int);
    virtual void muestraDatos();
    string getNombre();
    void setNombre();
    int getEdad();
    void setEdad();
};



#endif