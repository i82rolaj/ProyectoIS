*Borrar paciente*  

**ID:** 02  
**Descripción:** Se introduce nombre y apellidos del paciente y se elimina de la base de datos del sistema.  

**Actores principales:** Secretario.  

**Actores secundarios:** Paciente.  

**Precondiciones:** Que el paciente ya existiera en la base de datos.  

**Flujo principal:**  

1. El paciente decide abandonar la clínica y que se borren sus datos.
2. El secretario abre un cuadro donde rellenar nombre y apellidos del paciente.
3. El paciente queda eliminado del sistema. 

**Postcondición:** El paciente deja de existir en el sistema y se borran sus citas pendientes (en caso de haberlas), historial y tratamientos.  

**Flujos alternativos:**  

3.a Si el borrado fue correcto mostrará un mensaje de éxito indicando que el paciente fue borrado correctamente.
