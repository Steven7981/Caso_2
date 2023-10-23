// g++ -o main.o main.cpp -lcurl -std=c++17
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
        int cantGraderias;
        int maxGraderias;
        int revisarEnt;
        int cantFila;
        
        vector<queue<Fanatico>> filaFan;
        vector<Graderia> graderias;
        Comida camion;

    public:
        
        void iniciarSim(){
            simulacion.simulacion();
        //    int duracionSim = simulacion.getDuracionSimulacion();
         //   int duracionConcierto = simulacion.getDuracionEntrarConcierto();
            
            int tiempo_llegar = simulacion.getTiempoLlegarFan();

            
        }
            seguridadZona guarda;

       //     while (duracionSim > 0){
        Threads(){
            int cantGraderias = simulacion.getGraderias();
            int maxGraderias = simulacion.getGraderiasMax();
            int revisarEnt = simulacion.getAtencionFan();
            int cantFila = simulacion.getCantFilas();
            vector<queue<Fanatico>> filaFan(cantFila);
            vector<Graderia> graderias(cantGraderias);

            this->graderias=graderias;
            this->filaFan = filaFan;
            this->cantFila = cantFila;
            this->revisarEnt=revisarEnt;
            this->maxGraderias=maxGraderias;
            this->cantGraderias=cantGraderias;
        }
        void llegarFans(){
            int cantFans = simulacion.getCantidadLlegarFan();
            int maximo_fila = simulacion.getFilaFanMax();
                int veces = maximo_fila/cantFans;
                for(int j = 0; j < cantFila; j++){
                    // cout<<filaFan[j].size();
                    for (int h = 0; h < veces; h++){
                        if (filaFan[j].size() != maximo_fila){
                            for (int i = 0; i < cantFans; i++){
                            Fanatico fan;
                            filaFan[j].push(fan);
                            cout<<"Llegaron "<< cantFans <<" a la fila numero "<< j+1 <<endl;
                        // this_thread::sleep_for(tiempo_llegar * chrono::seconds(1));
                        }   
                    cout<<"La fila "<< j<< " esta lleno, hay "<< filaFan[j].size()<< " fanaticos."<< endl;
                    }
                }
            }
        }
                
        void verificarEnt(){
            vector<Graderia> graderias(cantGraderias);
            for (int l = 0; l < cantGraderias; l++) {
                for (int k = 0; k < cantFila; k++) {
                    if (graderias[l].obtenerSize() == maxGraderias) {
                        break;
                    }
                    while (!filaFan[k].empty()) {
                        Fanatico fan = filaFan[k].front();
                        cout << "Revisando entrada" << endl;
                        if (guarda.revisarEntrada(fan)) {
                            cout << "Se dejó pasar un fanático a la gradería número " << l << endl;
                            graderias[l].agregar(fan);
                            this_thread::sleep_for(revisarEnt * chrono::seconds(1));
                        } else {
                            cout << "Alguien fue a la estación de comida" << endl;
                            camion.agregar(fan);
                        }
                        filaFan[k].pop();
                    }
                }
            }       
        }
        

    // Simulación de atención de fanáticos en la gradería
    void atenderCom(){
        Fanatico fan = camion.atender();
        for (int i = 0; i<cantGraderias; i++){
            if (graderias[i].obtenerSize()!=maxGraderias){
                graderias[i].agregar(fan);
                break;
            }
        }

    }
    
                
           //     duracionSim--;
       //         this_thread::sleep_for(chrono::seconds(1));
            
      //      }
         //   cout<<"Terminó el concierto";
  //      }
};

#endif