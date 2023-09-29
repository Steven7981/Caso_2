#include <iostream>
using namespace std;
class Persona{
    private:
        string tipo;

    public:
        string persona(std::string tipo){
            return "Persona tipo" + tipo; //constructor
        }
};
