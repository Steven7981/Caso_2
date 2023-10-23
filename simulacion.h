#ifndef simulacion_h
#define simulacion_h

#include "json.hpp"
#include <fstream>
#include <iostream>

using namespace std;

using json = nlohmann::json;


class jsonDatos{
    private:
    int duracionSimulacion;
    int duracionEntrarConcierto;

    //antes de entrar al concierto
    int cantidadLlegarFan;
    int guardas;
    int filaFanMax;
    int atencionFan;
    int cantFilas;
    int tiempoLlegarFan;

    //comida
    int camiones;
    int chefsCamion;
    int filaComMax;
    int atencionCom;

    //graderia
    int graderias;
    int graderiaMax;
    int tiempoSalir;

    public:
    void simulacion(){
        cargar();
    }
    
    void setDuracionSimulacion(int tiempo){
        duracionSimulacion = tiempo;
    }

    void setDuracionEntrarConcierto(int tiempo){
        duracionEntrarConcierto = tiempo;
    }
    void setCantFilas(int cantidad){
        cantFilas = cantidad;
    }
    void setCantLlegarFan(int cantidad){
        cantidadLlegarFan = cantidad;
    }

    void setTiempoLlegarFan(int tiempo){
        tiempoLlegarFan = tiempo;
    }
    void setGuardas(int cantidad){
        guardas = cantidad;
    }

    void setFilaFanMax(int cantidad){
        filaFanMax = cantidad;
    }

    void setAtencionFan(int tiempo){
        atencionFan = tiempo;
    }

    void setCamiones(int cantidad){
        camiones = cantidad;
    }

    void setChefsCamion(int cantidad){
        chefsCamion=cantidad;
    }

    void setFilaComMax(int maximo){
        filaComMax = maximo;
    }

    void setAtencionCom(int tiempo){
        atencionCom = tiempo;
    }

    void setGraderias(int cantidad){
        graderias = cantidad;
    }

    void setGraderiasMax(int maximo){
        graderiaMax = maximo;
    }

    void setTiempoSalir(int tiempo){
        tiempoSalir= tiempo;
    }
    
    int getDuracionSimulacion(){
        return duracionSimulacion;
    }

    int getDuracionEntrarConcierto(){
        return duracionEntrarConcierto;
    }

    int getCantidadLlegarFan(){
        return cantidadLlegarFan;
    }

    int getTiempoLlegarFan(){
        return tiempoLlegarFan;
    }
    int getGuardas(){
        return guardas;
    }

    int getCantFilas(){
        return cantFilas;
    }
    int getFilaFanMax(){
        return filaFanMax;
    }

    int getAtencionFan(){
        return atencionFan;
    }

    int getCamiones(){
        return camiones;
    }

    int getChefsCamion(){
        return chefsCamion;
    }

    int getFilaComMax(){
        return filaComMax;
    }

    int getAtencionCom(){
        return atencionCom;
    }

    int getGraderias(){
        return graderias;
    }

    int getGraderiasMax(){
        return graderiaMax;
    }

    int getTiempoSalir(){
        return tiempoSalir;
    }

    //declarar los valores como esta en el json
    void cargar(){
    ifstream file("caso.json");
    json data;
    file >> data;

    int cantFilas = data["cantFilas"].get<int>();

    int cantidadLlegarFan = data["fanLlegar"].get<int>();

    int tiempoLlegarFan = data["duracionLlegar"].get<int>();

    int guardas = data["guardas"].get<int>();

    int filaFanMax = data["filaFanMax"].get<int>();

    int atencionFan = data["atencionFan"].get<int>();

    int camiones = data["camiones"].get<int>();

    int chefsCamion = data["chefsPorCamion"].get<int>();

    int filaComMax = data["filaComMax"].get<int>();

    int atencionCom = data["atencionCom"].get<int>();

    int graderias = data["graderias"].get<int>();

    int graderiaMax = data["graderiaMax"].get<int>();

    int tiempoSalir = data["duracionSalir"].get<int>();

    int duracionSimulacion = data["duracionSimulacion"].get<int>();

    int duracionEntrarConcierto = data["duracionEntrarConcierto"].get<int>();

    setDuracionSimulacion(duracionSimulacion);

    setDuracionEntrarConcierto(duracionEntrarConcierto);

    setCantFilas(cantFilas);

    setCantLlegarFan(cantidadLlegarFan);

    setTiempoLlegarFan(tiempoLlegarFan);

    setGuardas(guardas);

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