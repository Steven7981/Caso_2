#ifndef graderia_h
#define graderia_h

#include <stack>
#include <iostream>
#include <fstream>
using namespace std;

class Graderia{
    private:
        stack<Fanatico> colaFan;

    public:
    //cuando termie el concierto, ir sacando a la gente de las graderias
        void salirGraderia(){
            colaFan.pop();
        }
        Graderia(){

        }

        int obtenerSize(){
            return colaFan.size();
        }

        void agregar(Fanatico fan){
            colaFan.push(fan);
        }

};

#endif