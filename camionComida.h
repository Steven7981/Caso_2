#include <iostream>
#include <fstream>
#include <queue>
#include "fanatico.h"
using namespace std;


class Comida{
    private:
        queue<Fanatico> filaDeComida;
    public:
        Comida(){

        }

        void atender(){
            Fanatico fan;
            fan = filaDeComida.front();
            filaDeComida.pop();
            cout<<"Se atendio a la persona que estaba frente a la cola de comida"<<endl;
        }
};