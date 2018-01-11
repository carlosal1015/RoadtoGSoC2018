## Crear un Grupo ##

Creamos el grupo fanaticos

`$> groupadd fanaticos`

_Vuelvan a crear tuxito_ 

## Agregar un usuario a un grupo ##

Agrega al usuario tuxito al grupo fanaticos
 
`$> gpasswd -a tuxito fanaticos`

Verificamos al grupo fanaticos en los grupos

`$> grep fanaticos /etc/group`

Se puede agregar un usuario directamente a un grupo editando el archivo groups 

`$> vim etc/group` 
