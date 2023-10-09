#include <iostream>
#include<random>
using namespace std;

class Fanatico{
    private:
        string nombre;
        bool entrada;
    
    public:
        void generarFanatico(string nombre){
            Fanatico auxFan;
            auxFan.nombre = nombre;
            random_device rd;
            mt19937 generador(rd());
            uniform_int_distribution<int> entrada(0, 1);
            auxFan.entrada = entrada;
        }

        bool getEntrada() {
            return entrada;
        }
};
