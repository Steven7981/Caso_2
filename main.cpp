// g++ -o main.o main.cpp -lcurl -std=c++17

#include "simulacion.h"
#include "cantante.h"
#include "threads.h"

using namespace std;

int main(void){
    Threads thread; 
    thread.iniciarSim();

    // Crear los hilos para las funciones
  /*/  std::thread hiloLlegarFans(&Threads::llegarFans, &thread);
    std::thread hiloVerificarEnt(&Threads::verificarEnt, &thread);
    std::thread hiloAtenderCom(&Threads::atenderCom, &thread);

    // Iniciar los hilos
    hiloLlegarFans.join();
    hiloVerificarEnt.join();
    hiloAtenderCom.join();*/


}