*Modificar cita*

**ID:** 05  
**Descripción:** Se accede a los datos de la cita en la base de datos para modificar lo necesario y se vuelve a guardar.

**Actores principales:** Secretario y paciente

**Actores secundarios:** Ninguno

**Precondiciones:** Debe haber una cita reservada anteriormente para poder modificarla.

**Flujo principal:**

1. El paciente comunica al secretario los nuevos datos para la cita.  
2. El secretario busca la cita correspondiente en la base de datos.  
3. Tras modificar la cita el secretario vuelve a introducirla en la base de datos.

**Postcondición:** La cita queda modificada con los nuevos datos.

**Flujos alternativos:**

2.a: Si el secretario no introduce correctamente los datos para buscar la cita o no existe, el sistema devolverá un mensaje de error.