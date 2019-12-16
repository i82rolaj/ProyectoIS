*Modificar tratamiento*  

**ID:** 07  
**Descripción:** Se modifica la información del tratamiento actual del paciente.  

**Actores principales:** Secretario.  

**Actores secundarios:** Paciente.  

**Precondiciones:** Que exista un determinado paciente con tratamiento en curso.  

**Flujo principal:**  

1. El secretario introduce el nombre y apellidos del paciente en un cuadro de búsqueda
2. El sistema solicita al usuario los nuevos datos del tratamiento.
3. El secretario introduce los datos y se actualiza el tratamiento.  

**Postcondición:** El tratamiento ve modificados sus datos y queda reflejada la nueva información.  

**Flujos alternativos:**  

2.a: Si el paciente no tiene ningún tratamiento en curso el sistema mostrará un mensaje que lo indique.
