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
    + Edad
    + Dirección
    + Teléfono
    + DNI
    + Número de la Seguridad Social
    + Historial Médico
+ Citas
  + Hora
  + Consulta
  + Paciente

##### Requisitos funcionales (ordenados por prioridad)
1. Añadir nuevo paciente.
2. Añadir datos del paciente.
3. Mostrar una lista con todos los pacientes.
4. Buscar paciente por nombre y apellidos.
5. Mostrar datos del paciente.
6. Mostrar historial médico del paciente.
7. Modificar datos del paciente.
8. Modificar historial médico del paciente.
9. Mostrar una lista con las citas médicas concertadas.
10. Modificar las citas médicas de la lista

##### Requisitos no funcionales
+ Sistema Operativo: Linux
+ Interfaz: CLI (Command-Line Interface)
+ Lenguaje de Implementación: C++
