## Historial de comandos ##

Lista los comandos ejecutados y los identificado por el numero de ejecucion 

`$> history` 

Ejecuta el comando 127 del History 

`$> !127` 

Ejecuta el ultimo comando del history, que empieza con vim 

`$> !vim` 

Archivo donde se guarda el history 

`$> cat /root/.bash_history`  


## Bloquear el history ## 

Hace inmutable el archivo 

`$> chattr +i /root/.bash_history` 

Quita inmutabilidad

`$> chattr -i /root/.bash_history` 
