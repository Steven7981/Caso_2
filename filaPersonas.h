#include "fanatico.h"
#include <queue>
#include <iostream>
#include <string>
using namespace std;
// cola de personas que esta haciendo fila para el concierto
class filaPersona{
    private:
        queue<Fanatico> fila;
    public:
        void agregarPersonas(Fanatico fan){
            fila.push(fan);
        }

        queue<Fanatico> getFila(){
            return fila;
        }
};
