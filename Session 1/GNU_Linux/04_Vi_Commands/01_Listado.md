## El Editor VIM ##

`ESC`: ingresa al modo comando 

`i`: entra en modo inserción desde la misma linea 

`o`: entra en modo inserción desde la sgte linea 

`1G`: va a la primera línea 

`23G`: va a la línea 23 

`:45`: va a la línea 45 

`G`: va a la última línea 

`/palabra`: busca una cadena 

`n`: sigue buscando 

`dd`: corta o borra una linea 

`d8d`: corta o borra 8 lineas 

`yy`: copia una linea 

`y7y`: copia 7 lineas 

`p`: pega el contenido del portapapel 

`5p`: pega 5 veces el contenido del portapapel 

`u`: deshace la ultima accion 

`ctrl+R`: rehace la ultima accion 

`x`: borra una letra 

`:w`: graba el archivo actual 

`:wq`: graba y sale 

`:w!`: graba de forma forzada 

`:wq!`: graba y sale forzadamente 

`:q!`: sale forzadamente 

`:1,$s/busqueda/reemplaza/g`:busca una cadena y la reemplaza 

`:! comando`:ejecuta un comando en bash y vuelve a VIM 

`:e archivo`: abre un nueva archivo en el sgte buffer 

`:b1`: va el primer buffer abierto 

`:b2`: va al segundo buffer, para cambiar de buffer hay que grabar el buffer actual 

`:set number`: muestra los numeros de linea 

`:set nonumber`: quita los numeros de linea 

`:set paste`: habilita el pegado sin auto identificacion 

`:set ts=3`: establece a 3 los espacios de los tabs Insertar : entra en modo de reemplazo 

`:saveas archivo`: guarda como nombre archivo 

`:shitf+a`: entra en modo insercion al final dpel 

`D`: elimina texto desde el cursosr actual hasta el final de la linea 

`dG`: elimina todo hasta la última línea 

`:wq! ++utf8`: guarda el fichero en modo UTFP (por defecto) 

`:nohl`: cancela los resultados de búsqueda 


## Instalar VIM ##

`$> su -` 

`$> dnf -y install vim-enhanced`


