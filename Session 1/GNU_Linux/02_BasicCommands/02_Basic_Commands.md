## Primera Experiencia ##

Loguearse como root
 
`$> su -` 

Ingresar al directorio /etc 

`$> cd /etc` 

Salir del directotio /etc 

`$> cd ..` 

Mostrar en que directorio me encuentro 

`$> pwd` 

Ir al directorio por defecto del usuario 
ej: pepito -> /home/pepito root -> /root 

`$> cd` 

Crear el directorio pruebas 

`$> mkdir pruebas` 

Crear el directorio pruebas,imagenes,fotos uno dentro del otro 

`$> mkdir -p pruebas/imagenes/fotos` 

Si añadimos la opción -p mkdir se encarga de crear, si no existen, los directorios miprograma y documentacion. Si usaras este comando sin la opción -p obtendrías como resultado un error. 

`$> mkdir -p miprograma/documentacion/html` 

Cambiar al directorio pruebas 

`$> cd pruebas` 

`$> pwd` 

Crear el archivo vacio saludo 

`$> touch saludo` 

Listar con detalles el archivo saludo 

`$> ls -l saludo` 

Mostrar un mensaje a la pantalla y lo redirecciona el archivo saludo lo sobreescribe 

`$> echo "hola mundo" > saludo` 

Mostrar el contenido del archivo saludo 

`$> cat saludo` 

Copiar archivo saludo como hola 

`$> cp saludo hola` 

Crear el directorio documentos 

`$> mkdir documentos` 

Copiar el archivo saludo,hola dentro del directorio documentos 

`$> cp saludo hola documentos/` 

Listar con detalles el directorio documentos 

`$> ls -ld documentos` 

Listar el contenido del directorio documentos 

`$> ls -l documentos` 

Copiar el directorio documentos como el directorio archivos, incluyendo subdirectorios, -R es recursivo 

`$> cp -R documentos archivos` 

Copiar el directorio imagenes como el directorio documento 

`$> cp -R imagenes documentos` 

Listar el directorio documentos 

`$> ls -l documentos` 

Listar todos los archivos y directorios del directorio actual, incluyendo archivos ocultos 

`$> ls -la` 

Listar en columnas por tiempo y modo reverso 

`$> ls -lrt`

`$> ls -lrt /` 

Listar todos los archivos y directorios del directorio documentos 

`$> ls -la documentos` 

Listar en columnas incluyendo ocultos y subdirectorio del directorio documentos 

`$> ls -lRa documentos`
 
`$> ls -lRa /` 

Listar archivos y directorios que comiencen con sa 

`$> ls sa*` 

Mostrar en forma resumida las opciones del comando 

`$> ls --help` 

Mover el archivo actual "hola" como "holitas", renombra el archivo 

`$> mv hola holitas` 

Mover archivo holitas dentro de imagenes y lo renombra como hola 

`$> mv holitas imagenes/hola`
 
`$> ls imagenes` 

Mover directorio imagenes en el mismo directorio renombralo como galeria, no necesita recursivo -R para directorios 

`$> mv imagenes galeria` 

Borrar archivo saludo no hay undelete 

`$> rm saludo` 

Borrar forzadamente sin pregunta archivo saludo 

`$> rm -f saludo` 

Borrar forzadamente el directorio galeria 

`$> rm -fR galeria`
