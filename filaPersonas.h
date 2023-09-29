#include "fanatico.h"
#include <queue>
#include <iostream>
#include <string>
using namespace std;

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
