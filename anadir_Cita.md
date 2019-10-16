*Añadir cita*

**ID:** 04  
**Descripción:** Se rellena un formulario con los datos de la cita para realizar la reserva y guardarla en la base de datos.

**Actores principales:** Secretario y paciente

**Actores secundarios:** Ninguno

**Precondiciones:** El paciente debe estar dado de alta en el sistema antes solicitar la cita.

**Flujo principal:**

1. El secretario consulta el listado de citas disponibles y se lo indica al paciente.  
2. El paciente elige la fecha y la hora además de indicar el motivo de la cita.  
3. El secretario realiza en el sistema la reserva.  

**Postcondición:** La cita queda registrada en el sistema a nombre del paciente y no se podrá reservar otra cita con la misma fecha y hora.

**Flujos alternativos:**

3.a: Si ya había una cita solicitada por el mismo paciente, se eliminará la anterior y solo quedará registrada la más reciente.