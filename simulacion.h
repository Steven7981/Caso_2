#include <json.hpp>
#include <fstream>
#include <iostream>

using namespace std;

using json = nlohmann::json;


class jsonDatos{
    private:
    int *duracionSimulacion;
    int *duracionEntrarConcierto;

    //antes de entrar al concierto
    int *tiempoLlegarFan;
    int *guardas;
    int *filaFan;
    int *atencionFan;
    int *cantFilas;

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

    void setChefsCamionMin(int* minimo){
        chefsCamionMin = minimo;
    }

    void setChefsCamionMax(int* maximo){
        chefsCamionMax = maximo;
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
        graderiasMax = maximo;
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
        return graderiasMax;
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

    tiempoLlegarFan = new int(data["fanLlegar"].get<int>());

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

    setDuracionSimulacion(duracionSimulacion);
    }

}