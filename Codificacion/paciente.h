#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>


class paciente
{

private:
	string nombre;
	string apellidos;
	string sexo;
	string direccion;
	int edad;
	int telefono;

public:
	 paciente();

	 string Mostrar_datos(string nombre, string apellidos, string sexo, string direccion, int edad, int telefono);

	 void Añadir_nombre(string nombre);
	 void Añadir_apellidos(string apellidos, string nombre);
	 void Añadir_direccion(string direccion, string apellidos, string nombre);
	 void Añadir_telefono(int telefono, string apellidos, string nombre);

	 void Modificar_nombre(string nombre);
	 void Modificar_apellidos(string apellidos, string nombre);
	 void Modificar_direccion(string direccion, string apellidos, string nombre);
	 void Modificar_telefono(int telefono, string apellidos, string nombre);

	 void Indicar_sexo(string sexo, string apellidos, string nombre);
	 void Indicar_edad(int edad, string apellidos, string nombre);

	 void Borrar_direccion(string direccion, string apellidos, string nombre);
	 void Borrar_telefono(int telefono, string apellidos, string nombre);
};

#endif