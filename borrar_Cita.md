*Borrar cita*

**ID:** 06  
**Descripción:** Se busca la cita en la base de datos y se elimina de la misma.

**Actores principales:** Secretario

**Actores principales:** Paciente

**Precondiciones:** Debe haber una cita registrada en el sistema para poder ser borrada.

**Flujo principal:**

1. El secretario introduce los datos de la cita en la base de datos.  
2. Procede a eliminar todos los datos del sistema.  

**Postcondición:** La cita queda totalmente eliminada del sistema y vuelve a estar disponible una reserva con esa fecha y hora.

**Flujos alternativos:**

1.a: Si el secretario no introduce correctamente los datos para buscar la cita o no existe, el sistema devolverá un mensaje de error.