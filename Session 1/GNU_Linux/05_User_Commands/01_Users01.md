## Crear usuarios ##

Crea un nuevo usuario, su directorio de trabajo y su grupo igual 

`$> useradd -md /home/tuxito tuxito` 

Crea o cambia la contraseña de un usuario 

`$> passwd tuxito` 

Se loguea como tuxito 

`$> su - tuxito` 

Muestra información del usuario actual 

`$> id` 

Sale de la sesión 

`$> exit` 

$> id 

Crea usario linuxero con descripcion, grupo principal y grupos adicionales, así como su intérprete de comandos 

`$> useradd -md /home/linuxero -c "linuxero fanatico" \` 

`-g users -G video,audio -s /bin/bash linuxero` 

Configura el password para el usuario linuxero

`$> passwd linuxero` 

**Archivo de usuarios**

`$> grep linuxero /etc/passwd` 

> linuxero: x: 1003: 100: linuxero fanatico:/home/linuxero:/bin/bash
>
> Donde: 
>
> linuxero = nombre del usuario 
>
> x = la clave del usuario esta en /etc/shadow 
>
> 1003 = uid del usuario 
>
> 100 = gid del usuario 
>
> linuxero fanatico = descripción 
>
> /home/linuxero = directorio de trabajo del usuario 
>
> /bin/bash = interpretes de comandos 

**Archivo de grupos**

`$> grep users /etc/group` 

> users: x: 100: pepito,tuxito,windozero 
>
> Donde: 
>
> users = nombre del grupo 
>
> x = la clave del grupo esta en /etc/gshadow (no es comun) 
>
> 100 = gid del grupo 
>
> pepito,tuxito,windozero = usuarios adicionales del grupo 

**Archivo de contraseñas** 

`$> grep linuxero /etc/shadow`  

> linuxero:$6$qf7G8CbU$R9wiKgiN0rVaP1qsjQnzRsYfywP3L468:15297:0:99999:7::: 
>
> Donde: 
>
> linuxero = nombre del usuario 
>
> $6$qf7G... = contraseña encriptada en un algoritmo como MD5, SSHA 
>
> 15297:0:99999:7::: = validación expiración de la contraseña 

## Archivos importantes ##

* Lista de usuarios

   `/etc/passwd`  

* Lista de grupos

   `/etc/group`

* Lista de contraseñas

   `/etc/shadow` 

## Modificar usuarios ##

* Filtramos a tuxito dentro del archivo /etc/passwd

   `$> grep tuxito /etc/passwd` 

* Modificamos la desripción o contenido del usuario tuxito 

   `$> usermod -c "tuxito hacker"` 

   `$> grep tuxito /etc/passwd` 

* Modifica el archivo de usuario

   `$> vim /etc/passwd` 

## Borrar usuarios ##

* Borra el usuario pero no su directorio de trabajo 

   `$> userdel linuxero`

* Borra el usuario incluyendo su directorio

   `$> userdel -r tuxito`
