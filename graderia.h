#include "filaPersonas.h"
#include <stack>
#include <iostream>
#include "json.hpp"
#include <fstream>
using namespace std;

using json = nlohmann::json;

string nombreArchivo = "caso.json";

ifstream archivo(nombreArchivo);

json datos;
archivo >> datos;

int maxPersonasGraderia = datos["maxima cantidad de personas en graderia"]["maximo"];
class Graderia{
    private:
        stack<Fanatico> colaFan;

    public:
        void graderia(){
            pilaFan = stack<Fanatico>();
        }
        void agregarFanatico(Fanatico fan){
            if (pilaFan.size()<=grande){
                if (!pilaFan.size()=maxPersonasGraderia){
                    pilaFan.push(fan);
                }
            }
        }
        void salirGraderia(){
            pilaFan.pop();
        }
};
