#include <iostream>
#include <queue>
#include "fanatico.h"
class seguridadZona{
private:
	queue<Fanatico> colaFan;

public:
	void seguridadZona(){
		seguridadZona Personal;

	}
	void revisarEntrada(Fanatico fan){
		if fan.getEntrada() {
			colaFan.push();
		}
		else {
			cout << "El fanatico no tiene entrada." << endl;
		}
	}
}