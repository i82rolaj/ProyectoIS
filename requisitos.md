#Análisis de requisitos

El objetivo de nuestro sistema consistirá en gestionar correctamente el funcionamiento de una clínica, registrando en una base de datos el historial y la información de todos los pacientes así como la gestión de sus citas. 

##Requisitos funcionales

Nuestro software constará de una base de datos en la que se puedan almacenar toda la información relacionada con los pacientes, su correspondiente historial médico, citas y tratamientos. Además permitirá a secretaría realizar consultas sobre dichos datos. El sistema permitirá a los pacientes elegir sus citas en función de la disponibilidad.

###REQ-01: Registro de los pacientes

*El usuario registrará los datos personales de los pacientes la primera vez que piden una cita y los almacenará para futuras citas.*

El sistema guardará para cada cliente los siguientes datos obligatorios:   
* Nombre  
* Sexo  
* Fecha de nacimiento  
* Domicilio  
* Teléfono  
* Procedencia

**Restricciones**
En caso de que se intente registrar a un cliente que ya se encuentra en la base de datos, aparecerá un mensaje de error y no se producirá ningún cambio en el registro.

**Acciones**
El sistema tendrá acceso a estos datos cada vez que se realice una cita, se asigne un tratamiento, se precise modificar algunos de los datos o sea necesario comunicarse con el paciente.


###REQ-02: Registro de las citas

*El usuario añadirá una cita al sistema relacionándola a los datos del paciente que la solicita y asignándole una fecha y hora exclusiva para ella.*

Para cada cita la información requerida será:  
* Fecha + hora  
* Nombre del paciente  
* Motivo de la consulta

**Restricciones**
Si un cliente realiza dos registros de citas seguidos se producirá un error, eliminando la primera cita solicitada y registrando únicamente la última.

**Acciones**
El sistema debe saber en todo momento cuales son las horas y los días disponibles para registrar una cita, el tiempo estimado que necesitará cada consulta y el paciente al que está asignada.


###REQ-03: Registro de tratamientos

*El usuario solicitará a cada paciente su historial médico en el momento del primer ingreso y posteriormente a este historial se le añadirán los nuevos tratamientos y acciones que se lleven a cabo en cada consulta.*

En este registro deberán aparecer los siguientes campos, en caso de que existan:  
* Operaciones realizadas  
* Alergias  
* Problemas respiratorios/cardíacos  
* Embarazo (si/no)  
* Otros

**Restricciones**
Nunca se podrá recetar un tratamiento u operación que pueda afectar al paciente en función de su historial médico.

**Acciones**
El sistema debe acceder a este registro cada vez que realice una receta y modificarlo si la salud del paciente lo requiere.


##Requisitos no funcionales

###Eficiencia

Toda funcionalidad y registro debe responder al usuario con un tiempo máximo de 5 segundos.  
El sistema debe almacenar inicialmente un mínimo de 1000 pacientes, pudiendo ser este valor ampliado en el futuro.  
Los datos modificados, las citas y los tratamientos deben ser visibles para el usuario al instante de añadirlos. 


###Seguridad

Todos los datos personales correspondientes a los pacientes deberán estar cifrados y nunca serán visibles a otros pacientes, cumpliendo siempre con la ley de protección de datos.


###Usabilidad

El tiempo máximo para que el usuario aprenda a manejar completamente el programa será de un día, incluyendo la gestión de la base de datos y todas sus funcionalidades.  
El sistema proporcionará mensajes de error orientativos para su resolución.  
El sistema ofrecerá una interfaz gráfica bien formada. 


###Desarrollo

Todo el desarrollo del programa se realizará en lenguaje C++.  
El control de versiones se llevará a cabo con la plataforma Git.  
La documentación del proyecto se hará con Markdown. 
