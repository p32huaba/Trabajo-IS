#ifndef HISTORIAL_TRATAMIENTO_H
#define HISTORIAL_TRATAMIENTO_H

#include <string>

class historial_tratamiento
{

private:
	string tratamiento;
	string fecha_ini;
	int identificador;


public:
	historial_tratamiento();

	void Mostrar_tratamiento();

	void Añadir_tratamiento(string tratamiento, int identificador, string nombre, string apellidos);
	
	void Modificar_tratamiento();

	void Borrar_tratamiento();

};

#endif