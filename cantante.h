#include <iostream>
#include <queue>
#include "canciones.h"
using namespace std;

class Cantante{
    private:
        queue<Cancion> colaCanciones;
    
    public:
        void agregarCancion(Cancion cancion){
            colaCanciones.push(cancion);

        }

        void cantar(){
            colaCanciones.pop();
        }


};