*Mostrar cita paciente*

**ID:** 14  
**Descripción:** Se muestra la cita correspondiente a un paciente en concreto.

**Actores principales:** Secretario

**Actores secundarios:** Ninguno

**Precondiciones:** El paciente debe estar registrado en el sistema y tener reservada una cita.

**Flujo principal:**

1. El secretario introduce el nombre y apellidos del paciente en la base de datos.  
2. El sistema muestra toda la información de la cita correspondiente a ese paciente.

**Postcondición:** Ninguna.

**Flujos alternativos:**

1.a Si el secretario introduce incorrectamente el nombre y apellidos del paciente o este no tiene ninguna cita reservada, el sistema devolverá un mensaje de error.