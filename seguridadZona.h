#ifndef seguridadZona_h
#define seguridadzona_h
#include <iostream>
#include <queue>
#include "fanatico.h"
#include "graderia.h"


class seguridadZona{
public:
	seguridadZona(){

	}	
	bool revisarEntrada(Fanatico fan){
		bool confirmacion;
		confirmacion = fan.mostrarEntrada();
		return confirmacion;
		}
	
};

#endif