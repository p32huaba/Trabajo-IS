## Modificar datos del historial

**ID**:02
**Descripción**: Se modifica el historial medico, añadiendo o cambiando lo ya existente.

**Actores principales**: Doctores
**Actores secundarios**: Secretaría Médica

**Precondiciones**:
* Que exista el historial

**Flujo Principal**:
1. Se desea modificar el historial medico de un paciente
1. Se abre el cuadro de diálogo de búsqueda en el menú principal
1. Se introduce el nombre y apellidos del paciente
1. Se realizan los cambios deseados del historial medico

**Postcondiciones**:
* Ninguna

**Flujos alternativos**:
4.a. Si no existe el paciente o el historial, muestra un mensaje de error
