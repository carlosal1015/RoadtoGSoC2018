## Crear archivo saludo y ejecutar ejercicios de comandos vim ##

`$> vim saludo` 

`i` 

`hola mundo` 

`ESC` 

`yy` 

`20p` 

`G` 

`o` 

`windows es lo maximo` 

`ESC` 

`/hola` 

`n` 

`n` 

`:set number` 

`G` 

`yy` 

`30p` 

`:1,$s/windows/linux/g` 

`dd` 

`45G` 

`d2d` 

`dG` 

`u` 

`ctrl+R` 

`:! date` 

`:w` 

`:e otrosaludo` 

`:b1` 

`1G` 

`yG` 

`:b2` 

`p` 

`:wq!` 

## Verificando ##

`$> cat saludo` 

`$> cat otrosaludo` 


## Archivo de configuracion de VIM ##

`$> vim /etc/vimrc` 

`G`  

`o` 

`set nobackup` 

`set number` 

`set ts=4`

`set paste` 

`ESC` 

`:wq` 

`$> vim /etc/vimrc` 

`ESC`

`:q` 
