#ifndef seguridadZona_h
#define seguridadZona_h
#include <iostream>
#include <queue>
#include "fanatico.h"



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