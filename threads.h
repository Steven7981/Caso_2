#ifndef threads_h
#define threads_h

#include "camionComida.h"
#include "cantante.h"
#include "fanatico.h"
#include "graderia.h"
#include "json.hpp"
#include "persona.h"
#include "seguridadZona.h"
#include "simulacion.h"

#include <iostream>
#include <queue>
using namespace std::this_thread;
using namespace std;

class Threads{
    private:
        jsonDatos simulacion;
        queue<Fanatico> fila;

    public:
        void llegarFans(){
            int cantFans = simulacion.getCantidadLlegarFan();
            int tiempo_llegar = simulacion.getTiempoLlegarFan();
            int maximo_fila = simulacion.getFilaFanMax();

            for (int j = 0; j<maximo_fila; j++){
                for (int i = 0; i < cantFans; i++){
                    Fanatico *fan = new Fanatico();
                    fila.push(fan);
                    cout<<"Llegaron "<< cantFan <<" a la cola.";
            }
                this_thread::sleep_for(*tiempo_llegar * seconds(1));
            }
            
        }
}

#endif threads_h