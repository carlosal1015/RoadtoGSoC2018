## Búsqueda de Archivos ##
### find,locate,whereis ###

`$> find ./ -name a\* `

Busca archivos y directorios que comiencen con a, tomando como base el directorio actual 

`$> find /etc -name hosts` 

Busca desde el /etc el archivo o directorio interfaces 

`$> find /usr -name "*" -size +300k` 

Busca todos los archivos en el /usr que pesen mas de 300K 

`$> find /etc -name passwd -exec cat {} \;` 

Busca todo los archivos llamados passwd dentro de /etc y luego visualiza el contenido de cada uno de ellos con el comando cat 

`$> find / -user alumno -size 3M` 

Busca archivos del usuario alumno que sean mayores a 3 Megas en todo el sistema 

`$> updatedb` 

Actualiza la base de datos de la lista de archivos y directorios existentes en el sistema 

`$> locate interfaces` 

Busca en la base de datos el archivo interfaces 

`$> whereis vi` 

Muestra la ruta de binarios, librerias y documentacion del comando vi 

`$> which vi` 

Muestra la ruta del binario del comando vi
