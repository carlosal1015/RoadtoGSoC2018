## Comandos de Visualización de archivos ##

cat --> muestra un archivo de arriba abajo 

grep --> lista las lineas de un archivo que contenga una palabra como filtro 

egrep --> filtra como grep pero con un conjunto amplio de expresiones regulares

fgrep --> filtra como grep pero sin expresiones regulares, es el mas rapido 

tac --> al reves del cat 

tail --> muestra las ultimas lineas de un archivo 

head --> muetsra las primeras lineas de un archivo 

more --> como cat pero con pausa 

less --> visualizacion con pausa y en modo interactivo 

wc --> cuenta las lineas, palabras o caracteres 

sed --> buscar y reemplaza cadenas en la vista de un archivo 

pr --> visualiza un archivo en formato de impresión 

tr --> efectúa transformación de caracteres en la vista de un archivo 


## Redirección y Tubería ##
 
`>` 

Redirecciona la salida estándar a un archivo, sobreescribiéndolo si existe

`>>`

Redicciona la salida estándar a un archivo, añadiendo al final del mismo 

`<` 

Redirecciona la entrada estándar desde un archivo 

`|` 

Tuberia, concatenando comandos, permite combinar las salidas estándar de 2 o más comandos tee redirecciona y muestra la salida estándar.
