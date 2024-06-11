#include "persona.h"

Persona::Persona()
{

}

std::string Persona::Descripcion()
{
    return "Persona con nombre: " + this->nombre
           + " la edad es " + std::to_string(this->edad);
}
