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
#include <thread>  
#include <vector>  
#include <stack>

using namespace std::this_thread;
using namespace std;

class Threads{
    private:
        jsonDatos simulacion;
        vector<queue<Fanatico>> filas;

    public:
        void iniciarSim(){
            simulacion.simulacion();
            int duracionSim = simulacion.getDuracionSimulacion();
            int duracionConcierto = simulacion.getDuracionEntrarConcierto();
            int cantFans = simulacion.getCantidadLlegarFan();
            int tiempo_llegar = simulacion.getTiempoLlegarFan();
            int maximo_fila = simulacion.getFilaFanMax();
            int cantFila = simulacion.getCantFilas();
            int cantGraderias = simulacion.getGraderias();
            int maxGraderias = simulacion.getGraderiasMax();

            seguridadZona guarda;

            while (duracionSim > 0){
                    vector<queue<Fanatico>> filaFan(cantFila);
                    int veces = maximo_fila/cantFans;
                    for(int j = 0; j < cantFila; j++){
                       // cout<<filaFan[j].size();
                       for (int h = 0; h < veces; h++){
                            if (filaFan[j].size() != maximo_fila){
                                for (int i = 0; i < cantFans; i++){
                                Fanatico fan;
                                filaFan[j].push(fan);
                                cout<<"Llegaron "<< cantFans <<" a la fila numero "<< j<<endl;
                            // this_thread::sleep_for(tiempo_llegar * chrono::seconds(1));
                        }
                        cout<<"La fila "<< j<< " esta lleno, hay "<< filaFan[j].size()<< " fanaticos."<< endl;
                       }
                        
                    }
                    }

                vector<Graderia> graderias(cantGraderias);
                for (int l = 0; l < cantGraderias; l++){
                    for (int k = 0; k < cantFila; k++){
                        if (graderias[l].obtenerSize()==maxGraderias){
                            break;
                        }
                            while (!filaFan[k].empty()){
                            Fanatico fan = filaFan[k].front();
                            if (guarda.revisarEntrada(fan)){
                                graderias[l].agregar(fan);
                        }
                    }
                }
            }
                
                duracionSim--;
                this_thread::sleep_for(chrono::seconds(1));
            
            }
        }
};

#endif