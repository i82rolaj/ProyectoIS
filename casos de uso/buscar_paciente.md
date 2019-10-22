*Buscar usuario por nombre y apellidos*

**ID:** 12  
**Descripción:** Se busca en la base de datos la información de un paciente introduciendo nombre+apellidos.

**Actores principales:** Secretario

**Actores secundarios:** Paciente

**Precondiciones:** El paciente debe estar registrado en el sistema para poder ser buscado.

**Flujo principal:**

1. El secretario introduce obligatoriamente tanto el nombre como apellidos del paciente en el cuadro de búsqueda.  
2. Aparecen en pantalla todos los datos del paciente, historial y tratamientos.

**Postcondición:** Ninguna.

**Flujos alternativos:**

1.a: Si el secretario introduce los datos incorrectamente o el paciente no está registrado en el sistema se devolverá un mensaje de error.

1.b: Si el secretario introduce únicamente nombre o apellidos se mostrará un listado con todos los pacientes con ese nombre o con esos apellidos, no uno concretamente.
