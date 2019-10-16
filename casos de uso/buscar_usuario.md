*Buscar usuario por nombre y apellidos*

**ID:** 13  
**Descripción:** Se busca en la base de datos la información de un paciente introduciendo su nombre y apellidos.

**Actores principales:** Secretario

**Actores secundarios:** Paciente

**Precondiciones:** El paciente debe estar registrado en el sistema para poder ser buscado.

**Flujo principal:**

1. El secretario introduce el nombre y los apellidos del paciente en el sistema.  
2. Aparecen en pantalla todos los datos del paciente, historial y tratamientos.

**Postcondición:** Ninguna.

**Flujos alternativos:**

1.a: Si el secretario introduce los datos incorrectamente o el paciente no está registrado en el sistema se devolverá un mensaje de error.