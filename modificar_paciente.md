*Modificar paciente*  

**ID:** 03 
 
**Descripción:** Se modifica cualquiera de los atributos del paciente que se indique.  

**Actores principales:** Secretario.  

**Actores secundarios:** Paciente.  

**Precondiciones:** Que el paciente ya existiera en la base de datos.   

**Flujo principal:**  

1. El secretario introduce en cuadro de búsqueda el nombre y apellidos del paciente a modificar.
2. El sistema muestra un formulario para rellenar los nuevos dato del paciente. 
3. El secretario introduce los datos de dicho paciente.
4. Los datos personales del paciente quedan modificados en el sistema.  

**Postcondición:** El paciente indicado queda modificado con sus nuevos datos.  

**Flujos alternativos:**  

1.a: Si se produce un error al introducir el nombre y apellidos o no existe ningún paciente con esos datos el sistema arroja un mensaje de error.

