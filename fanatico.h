#ifndef fanatico_h
#define fanatico_h

#include <iostream>
#include <random>
#include "generadorRandom.h"
using namespace std;

class Fanatico {
    private:
        bool entrada = false;
    public:
        Fanatico(){
            RandomNumberGenerator random(1,10);
            int verificar = random.generateRandomNumber();
            if (verificar>=5){
                this->entrada=true;
            }
        }

        bool mostrarEntrada(){
            return entrada;
        }
        void moverFan(){
            //ir ya sea a hacer fila al camion de comida or ir a la graderia
        }
};

#endif