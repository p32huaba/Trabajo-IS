## Modificar los datos existentes de un paciente

**ID**:03
**Descripción**: Se Modifican los datos del paciente.

**Actores principales**: Doctores
**Actores secundarios**: Secretaría Médica

**Precondiciones**:
* Ninguna

**Flujo Principal**:
1. Se desea modifica los datos de un paciente
1. Se abre el cuadro de diálogo de búsqueda en el menú principal
1. Se introduce el nombre y apellidos del paciente
1. Se buscan los campos que quiere modificar
1. Se introducen los nuevos datos

**Postcondiciones**:
* Se muestra al consultor los nuevos datos

**Flujos alternativos**:
4.a. Si no existen los campos se muestra un mensaje de error
