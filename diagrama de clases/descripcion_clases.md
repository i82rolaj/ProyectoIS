*Descripción de las clases*  

**CLÍNICA:** La clase clínica representa a la empresa. No tendrá ningún atributo ni operación. La clínica tiene un secretario, ninguno o muchos pacientes y una o varias citas.
Si se elimina la clínica se borrarán todas las citas, pues no tiene sentido que existan sin la existencia de la clínica. Sin embargo, si se elimina la clínica los pacientes no desaparecen pues irán a otra, su razón de existir sigue teniendo sentido sin la clínica.


**SECRETARIO:** Esta clase tendrá una única instancia (puesto que sólo hay una secretaria en la clínica). No tendrá ningún atributo, pero tendrá como operaciones miembro todas las del sistema. Será el encargado de gestionar la inserción, borrado y modificación de citas, pacientes, historiales y tratamientos.


**PACIENTE:** Un paciente pertenece a una o varias clínicas. Sus atributos, junto a su tipo de dato son los siguientes:
nombre: char
sexo: char
fecha_nacimiento: string
domicilio: string
telefono: int
procedencia: char

Cada instancia de paciente tendrá asociada una y solo una instancia de Historial_medico. Si el paciente se elimina, también desaparecerá su historial médico (la existencia del historial no tiene sentido sin la existencia del paciente).

Cada instancia de paciente tendrá asociada ninguna o muchas instancias de la clase Tratamiento. Si se elimina el paciente, también desaparecerán todos sus tratamientos (la existencia del tratamiento no tiene sentido sin la existencia del paciente).

Por último, cada paciente puede tener asociada una y solo una cita, pero si el paciente se borra la cita no deja de existir ya que puede ser reservada por otro paciente diferente.

**HISTORIAL_MEDICO:** Cada instancia de esta clase refleja el historial médico de uno y solo un paciente. No tendrá operaciones miembro, únicamente los siguientes atributos:
alergias: string
operaciones_realizadas: string
problemas_respiratorios: boolean
problemas_cardiacos: boolean
otros: string

**CITA:** Cada instancia de esta clase refleja una hora de un día disponible para ser asignada a una y solo una instancia de paciente. No dispone de operaciones miembro y sus astributos son los siguientes:
fecha: string
hora: string
motivo_consulta: char

**TRATAMIENTO:** Cada instancia de esta clase se relaciona con una y solo una instancia de Paciente (un tratamiento determinado pertenece a un único paciente). No dispone de operaciones miembro y sus atributos son los siguientes:
diagnostico: char
medicacion: char
fecha_inicio: string
fecha_fin: string
observaciones: string
