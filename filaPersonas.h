#include "persona.h"
#include <queue>
#include <iostream>
#include <string>

class filaPersona{
    private:
        std::queue<Persona> fila;
    public:
        void agregarPersonas(Persona persona){
            fila.push(persona);
        }

        std::queue<Persona> getFila(){
            return fila;
        }
};