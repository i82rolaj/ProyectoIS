# Historias de usuario  



**Id:**  01

**Nombre:**  Añadir nuevo paciente

**Prioridad:**  9  

**Puntos Estimados:**  4

**Iteración:**  1

**Responsables:**  Juan Francisco Romero Lavirgen, Antonio Jesús Romero Pintado, Sofía Salas Ruíz.

**Descripción:**  Como administrador quiero añadir nuevos pacientes en la base de datos para tener acceso a su información para futuras visitas.

**Validación:**

-Se debe poder registrar cualquier paciente de nuevo ingreso.

-Deben aparecer nombre,apellidos y direccion de los pacientes.

-Un mismo usuario no puede ser añadido más de una vez.





**Id:**  02

**Nombre:**  Borrar paciente.

**Prioridad:**  5

**Puntos  Estimados:**  1

**Iteración:**  1

**Responsables:**  Juan Francisco Romero Lavirgen, Antonio Jesús Romero Pintado, Sofía Salas Ruíz.

**Descripción:**  Como administrador quiero borrar pacientes para tener actualizada la base de datos.

**Validación:**  
-Para poder borrar a un paciente debemos buscarlo por su nombre y dos apellidos.

-Poder buscar un paciente y borrarlo de la base de datos.

-Comprobar que el paciente ha sido borrado correctamente.

-Al buscar un paciente eliminado debe saltar un error.



**Id:**  03

**Nombre:**  Modificar Paciente.

**Prioridad:**  7

**Puntos estimados:**  4

**Iteración:**  1

**Responsables:**  Juan Francisco Romero Lavirgen, Antonio Jesús Romero Pintado, Sofía Salas Ruíz.

**Descripción:**  Como administrador quiero modificar cualquier paciente para actualizar sus datos. 

**Validación:** 

-Para poder modificar la información debemos buscar al paciente mediante nombre y dos apellidos.

-Se deben mostrar toda la información del paciente.

-Se debe poder modificar cualquier dato del paciente.

-Deben aparecer los cambios realizados.





**Id:**  04

**Nombre:**  Añadir cita 

**Prioridad:**  9

**Puntos estimado:**  3

**Responsables** Juan Francisco Romero Lavirgen, Antonio Jesús Romero Pintado, Sofía Salas Ruíz.

**Descripción:**  Como administrador quiero añadir las citas de los pacientes para tener una buena organización.

**Validación:**

-Para añadir una cita, el secretario primero selecciona una fecha y hora que no esté ocupada por otra cita.

-Posteriormente se introduce el nombre y apellidos del paciente que reserva la cita.

-Cada paciente solo puede tener una cita solicitada.

-Si un paciente reserva una cita y ya tiene otra, se eliminará la antigua y solo quedará registro de la más actual.

-Debe aparecer los datos personales del paciente en la cita.

-Debe aparecer el motivo y fecha de la cita.






**Id:**  05

**Nombre:**  Modificar cita.

**Prioridad:**  7

**Puntos estimado:**  2

**Iteración:**  1

**Responsables:**  Juan Francisco Romero Lavirgen, Antonio Jesús Romero Pintado, Sofía Salas Ruíz.

**Descripción:**  Como secretario quiero modificar las citas para corregir algún error.

**Validación:**  

-Para modificar una cita buscaremos el paciente mediante nombre y los dos apellidos.

-Poder modificar todos los parámetros de la cita.

-Poder modificar las citas cuantas veces se necesite.




**Id:**  06

**Nombre:**  Borrar citas.

**Prioridad:**  6

**Puntos estimado:**  2

**Iteración:**  1

**Responsables:**  Juan Francisco Romero Lavirgen, Antonio Jesús Romero Pintado, Sofía Salas Ruíz.

**Descripción:**  Como secretario quiero borrar citas para llevar un buen control.

**Validación:**

-Para borrar la cita de un paciente se buscará por nombre y dos apellidos.

-Se debe borrar todos los datos relacionados con la cita a borrar.

-Debe aparecer un mensaje de borrado con éxito.

-La fecha y hora de la cita borrada deben estar disponibles para una futura cita.



**ID:**  07

**NOMBRE:**  Añadir tratamiento

**Prioridad:**  9

**Puntos Estimados:**  2

**Iteración:**  1

**Responsables:**  Juan Francisco Romero Lavirgen, Antonio Jesús Romero Pintado, Sofía Salas Ruíz.

**Descripción:**  Como Secretario quiero añadir tratamientos para tener un registro de todos los tratamientos de cada paciente.

**Validación:** 

-Para añadir un nuevo tratamiento para un paciente se buscará dicho paciente mediante nombre y dos apellidos.

-Añadir tratamientos a los pacientes tras sus consultas.

-Los tratamientos se deben añadir con su periodo de duración



**Id:**  08

**Nombre:**  Modificar tratamiento.

**Prioridad:**  7

**Puntos Estimados:**  3

**Iteración:**  1

**Responsables:**  Juan Francisco Romero Lavirgen, Antonio Jesús Romero Pintado, Sofía Salas Ruíz.

**Descripción:**  Como secretario quiero modificar tratamientos para poder asignarles nuevos medicamentos a los pacientes.

**Validación:**

-Para buscar el paciente para modificar su tratamiento se hará mediante nombre y su dos apellidos.

-Solo se podrá modificar un tratamiento que esté en curso.

-Los tratamientos ya acabados no se puede modificar.

-Ningún tratamiento podrá ser borrado del sistema.

-Se podrá modificar la duración de un tratamiento para cancelarlo.

-Debe aparecer la fecha de la modificación.

-Debe aparecer la duración del nuevo tratamiento.



**Id:**  09

**Nombre:**  Añadir historial.

**Prioridad:**  9

**Puntos Estimados:**  4

**Iteración:**  1

**Responsables:**  Juan Francisco Romero Lavirgen, Antonio Jesús Romero Pintado, Sofía Salas Ruíz.

**Descripción:**  Como secretario quiero añadir el historial de cada paciente para poder consultar cualquier información.

**Validación:**

-Se debe buscar al paciente por nombre y apellidos, para poder añadir su historial.

-Deben aparecer todas las alergías, operaciones, y problemas respiratorios del paciente.

-Para buscar el historial de un paciente se introducirá el nombre y los dos apellidos.



**Id:**  10

**Nombre:**  actualizar historial.

**Prioridad:**  7

**Puntos Estimados:**  3

**Iteración:**  1

**Responsables:**  Juan Francisco Romero Lavirgen, Antonio Jesús Romero Pintado, Sofía Salas Ruíz.

**Descripción:**  Como secretario quiero modificar el historial del paciente para poder añadir nueva información.

**Validación:**

-Se debe buscar a los pacientes usando nombre y los dos apellidos para poder modificar el historial.

-Poder  introducir nuevas alergías, enfermedades, operaciones, problemas respiratorios y otros.

-No se debe podrá el historial del paciente.




**Id:**  11

**Nombre:**  Listar pacientes

**Prioridad:**  8

**Puntos Estimados:**  3

**Iteración:**  1

**Responsables:**  Juan Francisco Romero Lavirgen, Antonio Jesús Romero Pintado, Sofía Salas Ruíz.

**Descripción:** Como secretario quiero que aparezca todos los pacientes asi como su historial y tratamiento para tener un control de todos los pacientes de la clínica.

**Validación:**

-Debe aparecer todos los pacientes con su historial y tratamientos.

-Los pacientes borrados no deben aparecer.

-Los pacientes deben aparecer con su nombre, apellidos y dirección.






**Id:** 12

**Nombre:** Buscar usuario por nombre y apellidos.

**Prioridad:** 7

**Puntos estimados:** 3

**Iteración:**  1

**Responsables:**  Juan Francisco Romero Lavirgen, Antonio Jesús Romero Pintado, Sofía Salas Ruíz.

**Descripción:**  Como secretario quiero buscar los pacientes para tener un rápido acceso a su infrmación.

**Validación:**

-Buscaremos al paciente mediante nombre y dos apellidos.

-Se debe mostrar citas, tratamientos y historial  del usuario. 

-Se debe buscar por nombre y apellidos, ambos campos obligatorios.

-La búsqueda puede mostrar cero o más resultados.


**ID:**  13

**Nombre:**  Listar citas de hoy.

**Prioridad:**  7

**Puntos estimados:**  2

**Iteración:**  1

**Responsables:**  Juan Francisco Romero Lavirgen, Antonio Jesús Romero Pintado, Sofía Salas Ruíz.

**Descripción:**  Como secretario quiero que aparezcan las citas de hoy para tener un seguimiento de estas para llevar una buena organización.

**Validación:** 

-Deben aparecer las citas del dia.

-Las citas deben aparecer con la fecha y hora.

-Las citas deben aparecer con el nombre y dos apellidos del paciente.

-Deben aparecer las causas de las citas.


**ID:**  14

**Nombre:**  Mostrar cita paciente.

**Prioridad:**  6

**Puntos estimados:**  2

**Iteración:**  1

**Responssables:**  Juan Francisco Romero Lavirgen, Antonio Jesús Romero Pintado, Sofía Salas Ruíz.

**Descripción:** 

-Buscar paciente por nombre y dos apellidos.

-Debe aparecer el motivo de la cita.

-Debe aparecer fecha y hora de la cita.

-Mostrar un mensaje si un paciente no tiene ninguna cita reservada.



