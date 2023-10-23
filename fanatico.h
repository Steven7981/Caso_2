#ifndef fanatico_h
#define fanatico_h

#include <iostream>
#include <random>
#include "generadorRandom.h"
#include "json.hpp"

using namespace std;

class Fanatico {
    private:
        bool entrada = false;
    public:
        Fanatico(){
            ifstream file("caso.json");
            json data;
            file >> data;
            int proba = data["entrada"];
            RandomNumberGenerator random(1,10);
            int verificar = random.generateRandomNumber();
            if (verificar<=proba){
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