#include "filaPersonas.h"
#include <queue>
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
        queue<Fanatico> colaFan;

    public:
        void graderia(){
            colaFan = queue<Fanatico>();
        }
        void agregarFanatico(Fanatico fan){
            if (colaFan.size()<=grande){
                if (!colaFan.size()=maxPersonasGraderia){
                    colaFan.push(fan);
                }
            }
        }
        void salirGraderia(){
            colaFan.pop();
        }
};
