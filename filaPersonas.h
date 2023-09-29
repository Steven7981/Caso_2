#include "fanatico.h"
#include <queue>
#include <iostream>
#include <string>

class filaPersona{
    private:
        std::queue<Fanatico> fila;
    public:
        void agregarPersonas(Fanatico fan){
            fila.push(fan);
        }

        std::queue<Fanatico> getFila(){
            return fila;
        }
};