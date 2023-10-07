#include "filaPersonas.h"
#include <queue>
#include <iostream>
#include "json.hpp"
using json = nlohmann::json;

using namespace std;

class Graderia{
    private:
        queue<Fanatico> colaFan;

    public:
        void graderia(){
            //constructor
        }
        void agregarFanatico(){
            //agrega fanaticos a la cola de graderia
        }
};
