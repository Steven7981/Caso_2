#include <iostream>
class Persona{
    private:
        std::string tipo;

    public:
        std::string persona(std::string tipo){
            return "Persona tipo" + tipo; //constructor
        }
};