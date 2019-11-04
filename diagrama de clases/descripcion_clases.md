*Descripción de las clases*  


**PACIENTE:** Un paciente pertenece a una o varias clínicas. Sus atributos, junto a su tipo de dato son los siguientes:

nombre: char

sexo: char

fecha_nacimiento: string

domicilio: string

telefono: int

procedencia: char

Cada instancia de paciente tendrá asociada una y solo una instancia de Historial_medico. Si el paciente se elimina, también desaparecerá su historial médico (la existencia del historial no tiene sentido sin la existencia del paciente).

Cada instancia de paciente tendrá asociada ninguna o muchas instancias de la clase Tratamiento. Si se elimina el paciente, también desaparecerán todos sus tratamientos (la existencia del tratamiento no tiene sentido sin la existencia del paciente).

Por último, cada paciente puede tener asociada una y solo una cita, pero si el paciente borra la cita no deja de existir ya que puede ser reservada por otro paciente diferente.

operaciones: 

-anadir_paciente()

-borrar_paciente()

-buscar_paciente()

-listar_paciente()

-modificar_paciente()

-mostrar_cita_paciente()

**HISTORIAL_MEDICO:** Cada instancia de esta clase refleja el historial médico de uno y solo un paciente. No tendrá operaciones miembro, únicamente los siguientes atributos:

alergias: string

operaciones_realizadas: string

problemas_respiratorios: boolean

problemas_cardiacos: boolean

otros: string

operaciones:

-actualizar_historial()

-anadir_historial()

**CITA:** Cada instancia de esta clase refleja una hora de un día disponible para ser asignada a una y solo una instancia de paciente. No dispone de operaciones miembro y sus astributos son los siguientes:

fecha: string

hora: string

motivo_consulta: char

operaciones:

-anadir_cita()

-cancelar_cita()

-modificar_cita()

-modificar_cita_paciente()

**TRATAMIENTO:** Cada instancia de esta clase se relaciona con una y solo una instancia de Paciente (un tratamiento determinado pertenece a un único paciente). No dispone de operaciones miembro y sus atributos son los siguientes:

diagnostico: char

medicacion: char

fecha_inicio: string

fecha_fin: string

observaciones: string

operaciones:

-anadir_tratamiento()

-modificar_tratamiento()
