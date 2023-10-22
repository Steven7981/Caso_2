#include <iostream>
<<<<<<< HEAD
using namespace std;
=======
#include <fstream>
#include <queue>
#include "fanatico.h"
using namespace std;

>>>>>>> acuerdo

class Comida{
    private:
        queue<Fanatico> filaDeComida;
    public:
<<<<<<< HEAD
        void atender(queue<Fanatico> colaComida ){
            //recibe la cola de colaComida y agarra a uno de la cola para ir atendiendo
=======}
        Comida(){

        }

        void atender(){
            Fanatico fan;
            fan = filaDeComida.front();
            filaDeComida.pop();
            cout<<"Se atendio a la persona que estaba frente a la cola de comida"<<endl;
>>>>>>> acuerdo
        }
};
