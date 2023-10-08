#include "filaComida.h"
#include <iostream>
#include "json.hpp"
#include <fstream>
#include <random>
using namespace std;

using json = nlohmann::json;

string nombreArchivo = "caso.json";

ifstream archivo(nombreArchivo);

json datos;
archivo >> datos;

int duracionAtencionCamionMin = datos["duracion en atender en camion comida"]["minimo"];
int duracionAtencionCamionMax = datos["duracion en atender en camion comida"]["maximo"];

class Comida{
    public:
        void atender(queue<Fanatico> ){
            random_device rd;
            mt19937 generador(rd()); 
            uniform_int_distribution<int> distribucion(duracionAtencionCamionMin, duracionAtencionCamionMax);

            //se elige un numero aleatorio entre la duracion minima y maxima, y eso es lo que durara en atender 
            int numeroAleatorio = distribucion(generador);
                //thread para que espere la cantidad necesaria segun el numero aleatorio
                }
};