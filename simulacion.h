#ifndef simulacion_h
#define simulacion_h

#include "json.hpp"
#include <fstream>
#include <iostream>

using namespace std;

using json = nlohmann::json;


class jsonDatos{
    private:
    int *duracionSimulacion;
    int *duracionEntrarConcierto;

    //antes de entrar al concierto
    int cantidadLlegarFan;
    int *guardas;
    int filaFanMax;
    int *atencionFan;
    int *cantFilas;
    int tiempoLlegarFan;

    //comida
    int *camiones;
    int *chefsCamion;
    int *filaComMax;
    int *atencionCom;

    //graderia
    int *graderias;
    int *graderiaMax;
    int *tiempoSalir;

    public:
    simulacion(){
        cargar();
    }
    
    void setDuracionSimulacion(int* tiempo){
        duracionSimulacion = tiempo;
    }

    void setDuracionEntrarConcierto(int* tiempo){
        duracionEntrarConcierto = tiempo;
    }
    void setCantFilas(int* cantidad){
        cantFilas = cantidad;
    }
    void setCantLlegarFan(int* cantidad){
        cantidadLlegarFan = tiempo;
    }

    void setTiempoLlegarFan(int* tiempo){
        tiempoLlegarFan = tiempo;
    }
    void setGuardasMin(int* minimo){
        guardasMin = minimo;
    }

    void setGuardasMax(int* maximo){
        guardasMax = maximo;
    }

    void setFilaFanMax(int* cantidad){
        filaFanMax = cantidad;
    }

    void setAtencionFan(int* tiempo){
        atencionFan = tiempo;
    }

    void setCamiones(int* cantidad){
        camiones = cantidad;
    }

    void setChefsCamion(int* cantidad){
        chefsCamion=cantidad;
    }

    void setFilaComMax(int* maximo){
        filaComMax = maximo;
    }

    void setAtencionCom(int* tiempo){
        atencionCom=tiempo;
    }

    void setGraderias(int* cantidad){
        graderias = cantidad;
    }

    void setGraderiasMax(int* maximo){
        graderiaMax = maximo;
    }

    void setTiempoSalir(int* tiempo){
        tiempoSalir= tiempo;
    }
    
    int* getDuracionSimulacion(){
        return duracionSimulacion;
    }

    int* getDuracionEntrarConcierto(){
        return duracionEntrarConcierto;
    }

    int* getCantidadLlegarFan(){
        return cantidadLlegarFan;
    }

    int* getTiempoLlegarFan(){
        return tiempoLlegarFan;
    }
    int* getGuardasMin(){
        return guardasMin;
    }

    int* getGuardiasMax(){
        return guardasMax;
    }

    int* getFilaFanMax(){
        return filaFanMax;
    }

    int* getAtencionFan(){
        return atencionFan;
    }

    int* getCamiones(){
        return camiones;
    }

    int* getChefsCamion(){
        return chefsCamion;
    }

    int* getFilaComMax(){
        return filaComMax;
    }

    int* getAtencionCom(){
        return atencionCom;
    }

    int* getGraderias(){
        return graderias;
    }

    int* getGraderiasMax(){
        return graderiaMax;
    }

    int* getTiempoSalir(){
        return tiempoSalir;
    }

    //declarar los valores como esta en el json
    void cargar(){
    ifstream file("caso.json");
    json data;
    file >> data;

    cantFilas = new int(data["cantFilas"].get<int>());

    cantidadLlegarFan = new int(data["fanLlegar"].get<int>());

    tiempoLlegarFan = new int(data["duracionLlegar"].get<int>());

    guardas = new int(data["guardas"].get<int>());

    filaFanMax = new int(data["filaFanMax"].get<int>());

    atencionFan = new int(data["atencionFan"].get<int>());

    camiones = new int(data["camiones"].get<int>());

    chefsCamion = new int(data["chefsPorCamion"].get<int>());

    filaComMax = new int(data["filaComMax"].get<int>());

    atencionCom = new int(data["atencionCom"].get<int>());

    graderias = new int(data["graderias"].get<int>());

    graderiaMax = new int(data["graderiaMax"].get<int>());

    tiempoSalir = new int(data["duracionSalir"].get<int>());

    duracionSimulacion = new int(data["duracionSimulacion"].get<int>());

    duracionEntrarConcierto = new int(data["duracionEntrarConcierto"].get<int>());

    setDuracionSimulacion(duracionSimulacion);

    setDuracionEntrarConcierto(duracionEntrarConcierto);

    setCantFilas(cantFilas);

    setCantidadLlegarFan(cantidadLlegarFan);

    setTiempoLlegarFan(tiempoLlegarFan);

    setGuardasMin(guardas);

    setFilaFanMax(filaFanMax);

    setAtencionFan(atencionFan);

    setCamiones(camiones);

    setChefsCamion(chefsCamion);

    setFilaComMax(filaComMax);

    setAtencionCom(atencionCom);

    setGraderias(graderias);

    setGraderiasMax(graderiaMax);

    setTiempoSalir(tiempoSalir);

    }

};
#endif