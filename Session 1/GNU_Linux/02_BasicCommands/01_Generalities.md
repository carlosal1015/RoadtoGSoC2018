# Generalidades de Linux

## Nombres y extensiones de Archivos

* En Linux no existe el concepto de nombre y extensión a la hora de nombrar archivos. 

* El punto es un carácter más permitido en el nombre de un archivo.

##  Las mayúsculas se diferencias de las minúsculas

* Linux es sensible a los casos de las mayúsculas y minúsculas. 

Ejemplo:  myfile, Myfile y myFILE  son tres archivos diferentes.

*  Se aplica esta regla también para la configuración usuario/ contraseña.

## Tipos de Archivos

**Planos** /etc/sysconfig/network (contiene información de configuración)

**Binarios** /bin/ls (contiene información como funciones comunes y gráficos)
 
**Enlaces** /etc/system-release -> /etc/fedora-release (archivos asociados 
 a otros archivos que podría representar la misma data o podrían apuntar 
 a otro archivo, lo que es conocido como enlace directo o shortcut)
(Enlaces "duros",  asocia el nombre del enlace con la información del archivo fuente. 
 Enlace suave es una referencia al nombre de un archivo, no a la información)

**Especiales** /dev/sda1 (representa los diferentes dispositivos del sistema, 
 como discos duros, puertos seriales y particiones montadas en la raíz)

## Files everywhere!

¿Qué pasa con los directorios o folders?

Los directorios son archivos especiales que sirven como almacenador para organizar otros archivos.

Cuando se crea un directorio, un file o archivo es colocado en el disco duro para representar dicho directorio.

## Consolas de texto y gráfica

tty1 (Presionando Ctrl+Alt+F1)  ---> consola de texto

tty2 (Presionando Ctrl+Alt+F2)  ---> consola de texto

tty3 (Presionando Ctrl+Alt+F3)  ---> consola de texto

tty4 (Presionando Ctrl+Alt+F4)  ---> consola de texto

tty5 (Presionando Ctrl+Alt+F5)  ---> consola de texto

tty6 (Presionando Ctrl+Alt+F6)  ---> consola de texto

tty7 (Presionando Ctrl+Alt+F7)  ---> consola gráfica


## Prompt del Sistema 

<p align="center">
<img src="https://github.com/jinca/GNU_Linux/blob/master/Images/prompt.png">
</p>

## Rutas de Directorios

**Ruta Absoluta**

Aquella ruta que se toma en cuenta desde la raíz 

Ejemplo: 

$> ls /etc/fedora-release 


**Ruta Relativa**

Aquella ruta que se toma en cuenta desde el directorio actual 


_Responder:_

`$> cd /etc`
 
`$> ls fedora-release` 

`$> ls ../usr/share/doc` 

`$> ls .`

`$> cat /etc/passwd`

<p align="center">
<img src="https://github.com/jinca/GNU_Linux/blob/master/Images/passwd.png">
</p>


## Autocompletar

* Autocompleta Rutas (Absolutas y Relativas de archivos de archivos) 

* Autocompleta nombres de comandos. Ejemplo: `ca <TAB>` 

* Autocompleta nombres de variables de entorno. Ejemplo: `HOST <TAB>`

## Modo Interactivo (para comandos como man,less) 

Flecha Arriba y Abajo, AvPág RetPág --> Navegan por la visualización 

/cadena --> busca cadena (se pueden usar expresiones regulares) 

n --> sigue buscando 

1G --> va a primera linea 

G --> va a la ultima línea 

27G --> va a linea 27 

q --> salir del modo interactivo 


## Ayuda del Sistema 

El comando man nos sirve para revisar la documentación de un comando 

`$> man ls`

`/directory`

`n` 

`n`

`1G` 

`/reverse` 

`n` 

`G`

`q`


## Secciones de Manuales 

Hay diferentes secciones de páginas de manual, cada tipo se diferencia por un número, que se detallan a continuación: 

**1** Programas ejecutables y guiones del intérprete de órdenes 

**2** Llamadas del sistema (funciones servidas por el núcleo) 

**3** Llamadas de la biblioteca (funciones contenidas en las bibliotecas del sistema) 

**4** Ficheros especiales (se encuentran generalmente en /dev) 

**5** Formato de ficheros y convenios p.ej. /etc/passwd 

**6** Juegos 

**7** Paquetes de macros y convenios p.ej. man(7), groff(7). 

**8** Órdenes de administración del sistema (generalmente solo son para root) 

**9** Rutinas del núcleo [No es estándar] n nuevo [obsoleto] l local [obsoleto] p público [obsoleto] o viejo [obsoleto] 


**Ejemplos**

`$> man 1 ls` 

_Lista el manual de la sección 1 del comando ls_


`$> man -a ls`

_Presenta, secuencialmente, todas las páginas del comando ls disponibles en el manual. Entre página y página se puede decidir saltar a la siguiente o salir del paginador completamente._


`$> man -k printf`

_Lista todos los manuales (incluido el tipo de manual) donde haga referencia a printf._


## Enlaces de Archivos y Directorios: 

* Existen dos tipos de enlaces: blandos y duros 

**Crear un enlace blando** 

Similar al acceso directo, si se borra el archivo original el enlace se queda roto.

`$> ln -s /usr/bin /programas` 

`$> ls -l /` 

_El acceso directo se comporta como el directo original_ 

`$> ls -l /programas/` 

**Crear un enlace duro al archivo**, 

Si se borra el archivo este no desaparecera hasta que se borren todos los enlaces duros apuntando a él.

`$> ln /bin/touch /bin/tocar`

`$> cd /bin` 

`$> cp -p touch touch.bk` 

`$> rm -f /bin/touch` 

`$> ls -li /bin/tocar` 

`$> /bin/tocar archivo` 

`$> mv /bin/touch.bk /bin/touch`
