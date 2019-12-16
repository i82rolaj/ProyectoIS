*Descripción de las clases*  


**PACIENTE:** Cada instancia de paciente tendrá asociada ninguna o varias instancias de Historial_medico. Si el paciente se elimina, también desaparecerá su historial médico (la existencia del historial no tiene sentido sin la existencia del paciente).

Cada instancia de paciente tendrá asociada ninguna o muchas instancias de la clase Tratamiento. Si se elimina el paciente, también desaparecerán todos sus tratamientos (la existencia del tratamiento no tiene sentido sin la existencia del paciente).

Por último, cada paciente puede tener asociada una y varias citas, pero si el paciente borra la cita no deja de existir ya que puede ser reservada por otro paciente diferente.

Sus atributos, junto a su tipo de dato son los siguientes:

nombre: char

sexo: char

fecha_nacimiento: string

domicilio: string

telefono: int

procedencia: char


Y sus operaciones: 

-anadir_paciente()

-borrar_paciente()

-buscar_paciente()

-listar_pacientes()

-modificar_paciente()


**HISTORIAL_MEDICO:** Cada instancia de esta clase refleja el historial médico de uno y solo un paciente. Tendrá los siguientes atributos:

observaciones: string

fecha: string

Y las siguientes operaciones:

-anadir_historial()


**CITA:** Cada instancia de esta clase refleja una hora de un día disponible para ser asignada a una y solo una instancia de paciente. Sus atributos son los siguientes:

fecha: string

hora: string

motivo_consulta: char

Sus operaciones:

-anadir_cita()

-borrar_cita()

-listar_citas_hoy()

-mostrar_cita_paciente()


**TRATAMIENTO:** Cada instancia de esta clase se relaciona con una y solo una instancia de Paciente (un tratamiento determinado pertenece a un único paciente). Sus atributos son los siguientes:

diagnostico: char

medicacion: char

fecha_inicio: string

fecha_fin: string

observaciones: string

Operaciones:

-anadir_tratamiento()

-modificar_tratamiento()
