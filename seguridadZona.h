#include <iostream>
#include <queue>
#include "fanatico.h"


class seguridadZona{
private:
	queue<Fanatico> colaFan;

public:
	seguridadZona crearSeguridad(){
		seguridadZona Personal;
		return Personal;
	}

	void revisarEntrada(Fanatico fan){
		if (fan.getEntrada){
			colaFan.push(fan)//cola con las personas aceptadas que pasan a la graderia
		}
		else {
			cout << "El fanatico no tiene entrada." << endl;
		}
	}
}