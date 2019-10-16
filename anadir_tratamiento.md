*Añadir nuevo tratamiento*  

**ID:** 07  

**Descripción:** Se registra el tratamiento indicado por la Dra. en la base de datos del sistema relacionándolo con el paciente.  

**Actores principales:** Secretario.  

**Actores secundarios:** Paciente.  

**Precondiciones:** Tener al paciente dado de alta en el sistema y que haya acudido a una cita.  

**Flujo principal:**  

1. El paciente acude a su cita.
2. La Dra. le asigna un tratamiento si corresponde.
3. Se registra dicho tratamiento en el sistema y se relaciona con el paciente.  

**Postcondición:** Un nuevo tratamiento queda asociado al paciente en el sistema, reflejando la fecha de inicio y fecha final.  

**Flujos alternativos:**  
1.a No se podrá añadir un tratamiento si el paciente no ha ido a ninguna cita (a fin de evitar irregularidades).
