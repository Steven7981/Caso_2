#include <iostream>
#include <fstream>
#include "json.hpp"
#include "graderia.h"

using json = nlohmann::json;

int main() {
    std::string nombreArchivo = "caso.json";

    std::ifstream archivo(nombreArchivo);

    json datos;
    archivo >> datos;

    int horaInicio = datos["hora de entrada al concierto"]["inicio"];
    int horaCierre = datos["hora de entrada al concierto"]["cierre"];

    int minGuardas = datos["guardas de seguridad por graderia"]["minimo"];
    int maxGuardas = datos["guardas de seguridad por graderia"]["maximo"];

    int personasPorFila = datos["cantidad de personas en una fila"]["maximo"];
    int personasCada5Minutos = datos["cantidad de personas entrando a la fila cada 5 minutos"];
    
    int cantidadGraderia = datos["cantidad de graderia"];
    int maxPersonasGraderia = datos["maxima cantidad de personas en graderia"]["maximo"];

    double probabilidadEntrada = datos["bool de entrada"];
    
    int duracionAtencionFilaMin = datos["duracion en atender a persona en fila"]["minimo"];
    int duracionAtencionFilaMax = datos["duracion en atender a persona en fila"]["maximo"];

    int cantidadCamionesComida = datos["cantidad de camion de comida"];
    int chefsPorCamionMin = datos["chefs por camion"]["minimo"];
    int chefsPorCamionMax = datos["chefs por camion"]["maximo"];
    int personasEnFilaComidaMax = datos["cantidad de personas en fila para comida"]["maximo"];
    int duracionAtencionCamionMin = datos["duracion en atender en camion comida"]["minimo"];
    int duracionAtencionCamionMax = datos["duracion en atender en camion comida"]["maximo"];

    // Acceder a la lista de canciones
    json canciones = datos["cantante"]["canciones"];

    for (json::iterator it = canciones.begin(); it != canciones.end(); ++it) {
        std::string nombreCancion = it.key();
        int duracionCancion = it.value();
        std::cout << "Canción: " << nombreCancion << ", Duración: " << duracionCancion << " segundos" << std::endl;
    }

    int duracionSalirGraderiaMin = datos["duracion en salir graderia"]["minimo"];
    int duracionSalirGraderiaMax = datos["duracion en salir graderia"]["maximo"];




    return 0;
}
