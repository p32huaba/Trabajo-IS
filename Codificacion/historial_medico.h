#ifndef HISTORIAL_MEDICO_H
#define HISTORIAL_MEDICO_H

#include <string>

class historial_medico
	{

	private:
		string antecedentes;
		string alergias
		
	public:
		paciente();

		void Añadir_antecedente(string antecendentes, string nombre, string apellidos)
		void Añadir_alergia(string alergias, string nombre, string apellidos)

		void Modificar_antecedente(string antecendentes, string nombre, string apellidos);
		void Modificar_alergia(string alergias, string nombre, string apellidos);

		void Borrar_antecedente(string antecendentes, string nombre, string apellidos);
		void Borrar_alergia(string alergias, string nombre, string apellidos);

		void mostrar_historialmed();
	};

#endif
