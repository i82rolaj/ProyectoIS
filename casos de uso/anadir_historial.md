*Añadir nuevo historial*  

**ID:** 09  

**Descripción:** Se registra un historial médico del paciente de nueva alta para registrarlo en la base de datos asociándolo a dicho paciente.  

**Actores principales:** Secretario y paciente.  

**Actores secundarios:** Ninguno.  

**Precondiciones:** Tener al paciente dado de alta en el sistema.  

**Flujo principal:**  

1. Un paciente se registra en el sistema.
2. El paciente rellena un formulario con los datos médicos previos.
3. El secretario usa la interfaz del sistema para registrar dicho tratamiento y asociarlo al paciente en cuestión.  

**Postcondición:** Un historial médico queda asociado al paciente correspondiente en la base de datos del sistema.  

**Flujos alternativos:**  

3.a: Si hay algún campo incorrecto el sistema arrojará error.
3.b: Si se intenta introducir un tratamiento a un paciente que ya disponga de uno el sistema arrojará error. Cada paciente tiene un único historial médico (modificable).

