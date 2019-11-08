### Extracción de requisitos
---

Aquí vamos a analizar los requisitos necesarios para la creación de la Base de Datos de la Clínica Médica .

#### Partes interesadas

- Desarrollador
- Doctor
- Secretaría

#### Datos que gestiona el sistema

+ Paciente
    + Nombre
    + Apellidos
    + Sexo
    + Edad
    + Dirección
    + Teléfono
    + Historial Médico
        + Antecedentes familiares
        + Alergias
    + Historial de tratamientos
        + Medicamento
        + Dosis
        + Duración

+ Citas
    + Hora
    + Consulta
    + Paciente
    + Médico

##### Requisitos funcionales (ordenados por prioridad)

1. Añadir nuevo paciente.
2. Mostrar una lista con todos los pacientes.
3. Buscar paciente por nombre y apellidos.
4. Mostrar datos del paciente.
5. Mostrar historial médico del paciente.
6. Modificar datos del paciente.
7. Añadir nueva entrada al historial médico del paciente.
8. Mostrar una lista con las citas médicas concertadas en el día en concreto.
9. Mostrar una lista con las citas médicas concertadas por un paciente en concreto.
10. Modificar las citas médicas de la lista
11. Mostrar el historial de tratamientos
12. Añadir nuevo tratamiento al historial de tratamientos del paciente.
13. Cancelar el tratamiento que tenga activo un paciente.
11. Eliminar los datos de un paciente.

##### Requisitos no funcionales
+ Sistema Operativo: Linux
+ Interfaz: CLI (Command-Line Interface)
+ Lenguaje de Implementación: C++
