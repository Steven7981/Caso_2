#ifndef camionCom_h
#define camionCom_h

#include <iostream>
#include <fstream>
#include <queue>
#include "fanatico.h"
#include <thread> 
#include "json.hpp"

using namespace std;


class Comida{
    private:
        queue<Fanatico> filaDeComida;
    public:
        Comida(){
            
        }
        Fanatico atender(){
            ifstream file("caso.json");
            json data;
            file >> data;
            int atencion = data["atencionCom"];
            Fanatico fan;
            fan = filaDeComida.front();
            filaDeComida.pop();
            cout<<"Se atendio a la persona que estaba frente a la cola de comida."<<endl;
            this_thread::sleep_for(atencion * chrono::seconds(1));
            return fan;
        }

        void agregar(Fanatico fan){
            filaDeComida.push(fan);
            
        }
};

#endif