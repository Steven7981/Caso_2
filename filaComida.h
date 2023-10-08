#include <iostream>
#include <string>
#include "fanatico.h"
#include <queue>
#include "filaPersonas.h"

using namespace std;

#include "json.hpp"
#include <fstream>

using json = nlohmann::json;

string nombreArchivo = "caso.json";
ifstream archivo(nombreArchivo);

json datos;
archivo >> datos;
int personasEnFilaComidaMax = datos["cantidad de personas en fila para comida"]["maximo"];

// cola de personas que esta haciendo fila para camion de comida
class filaComida{
    private:
        std::queue<Fanatico> colaComida;

    public:
        void agregarFila(queue<Fanatico> fila){
            if (!fila.size()=personasEnFilaComidaMax){
                Fanatico persona = fila.front();
                fila.pop();
                colaComida.push(persona);
            }
        }
        std::queue<Fanatico> getFilaComida(){
            return colaComida;
        }
};