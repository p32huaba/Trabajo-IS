#ifndef CITAS_H
#define CITAS_H

#include <string>

class citas
	{
	
	private:
		string hora;
		string consulta;
		string medico;
		string fecha;
		
	public:
		paciente();
		
		string Mostrar_CitaDia(string hora, string fecha, string nombre, string apellidos)
		string Mostrar_CitaPaciente(string hora, string fecha, string nombre, string apellidos)

		void Añadir_Citas(string hora, string fecha, string consulta, string nombre, string apellidos)
		void Modificar_Citas(string hora, string fecha, string consulta, string nombre, string apellidos)
		void Eliminar_Cita(string hora, string fecha, string consulta, string nombre, string apellidos)

	};

#endif
