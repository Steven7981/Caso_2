#ifndef cantante_h
#define cantante_h


#include <iostream>
#include <queue>
#include "canciones.h"
#include "json.hpp"
#include <thread>
#include <chrono>

using namespace std;

class Cantante{
    private:
        queue<Cancion> colaCanciones;
    
    public:
        Cantante(){

        }
        bool cantar(){
            ifstream file("caso.json");
            json data;
            file >> data;
            std::vector<int> canciones = data["canciones"];

            for (auto cancion : canciones){
                int duracion = cancion;
                cout<<"Cantando una cancion con una duracion de "<< duracion;
                this_thread::sleep_for(chrono::seconds(duracion));
                canciones.erase(canciones.begin());
            }
            cout<<"Terminó de cantar todas las canciones. "<< endl;
            return true;
            }
        


};

#endif