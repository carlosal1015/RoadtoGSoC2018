# Introducción a Software Libre y GNU/Linux 

## Richard Stallman [RMS](https://stallman.org/) 
![alt text](https://github.com/jinca/GNU_Linux/blob/master/Images/1024px-NicoBZH_-_Richard_Stallman_(by-sa)_(10).jpg)

Richard Stallman creó el movimiento del Software Libre con el proyecto [GNU](https://www.gnu.org/) (GNU not UNIX) que intentaba crear un sistema operativo superior a Unix y que fuera completamente Libre.
Por ello creó el proyecto GNU en 1983 y la Fundación de Software Libre [(FSF](http://www.fsf.org/ )) en 1985, donde estableció de un marco de referencia moral,político y legal para el movimiento del software libre, como una alternativa al desarrollo y distribución del software no libre o privativo.

:arrow_right: Fruto de este trabajo se creó la licencia GPL y LPGL. 

La [GPL](https://www.gnu.org/licenses/) establece 4 libertades: 

* Libertad 0: la libertad de usar el programa, con cualquier propósito. 
* Libertad 1: la libertad de estudiar cómo funciona el programa y modificarlo, adaptándolo a tus necesidades. 
* Libertad 2: la libertad de distribuir copias del programa, con lo cual puedes ayudar a tu prójimo. 
* Libertad 3: la libertad de mejorar el programa y hacer públicas esas mejoras a los demás, de modo que toda la comunidad se beneficie.

Cuando uno publica o distribuye un software bajo la GPL esta obligado a publicar el código fuente del mismo. Quien recibe el software puede modificarlo a su gusto; pero no puede redistribuir el código modificado sin que estas tengan el código fuente de sus modificaciones, con lo cual se asegura la libertad del usuario. 
Sin embargo lo que no obliga la GPL, es que tu tengas que publicar obligatoriamente las modificaciones del software GPL que hayas tomado como base. 
Por ejemplo Google gana miles de millones de dólares usando Linux y software libre (GPL y otros) pero solo publica un porcentaje muy limitado de sus proyectos internos. 


## Linus Torlvalds [LBT](https://github.com/torvalds)

![alt text](https://github.com/jinca/GNU_Linux/blob/master/Images/Linus_Torvalds.jpeg)

- En 1991, en Helsinki, Linus Torvalds comenzó un proyecto que más tarde se llegó a ser el núcleo Linux; en ese instante el no sabía la dimensión que iba a alcanzar su proyecto. 

- A fines de 1992, Linux libera su kernel con la licencia GPL, consiguiendo que el Sistema Operativo lograra un [crecimiento espectacular](https://www.youtube.com/watch?v=sujZg7jwKdk).

- Linux como proyecto es solamente el núcleo (kernel) del sistema operativo; la combinación con las herramientas de GNU (compilador de C, bash, el debugger) ha creado la base para desarrollar las distribuciones; por eso es común referirse a Linux como GNU/Linux. 

## Distribuciones
  
Las distribuciones toman en un momento determinado una versión del kernel de Linux y la combinan con herramientas GNU, le crean un instalador y herramientas de administración, algunas distribuciones se basan en otras distribuciones y le dan un valor añadido. 

Sin embargo del universo de distribuciones las más importantes; por su relevancia e influencia en las demás distribuciones, son dos: 
Debian (basado en deb y apt) y Red Hat (basado en rpm y yum). 

![alt text](https://github.com/jinca/GNU_Linux/blob/master/Images/ldt681.png)

## Mapa de Distribuciones 

 Debian (Servidor)           | Red Hat
 ----------------------------|-------------------------------
 Ubuntu (Distro mas popular) | Fedora (Escritorio)
 Desktop (Escritorio) | RHEL (Servidor)
 Server (Servidor) | CentOS (clon de RHEL)
 _ | Oracle Linux (Clon de RHEL)
 _ | Scientific Linux (Clon de RHEL)
 Linux Mint(Escritorio) | SuSE
 Basado en Ubuntu | OpenSuSE (Escritorio)
 _ | SLES (Servidor)
 _ | Mageia (Escritorio)

Otros: Slackware, Gentoo, DanSmall Linux, etc 

_**Slackware Linux** es una distribución del sistema operativo GNU/Linux creada en 1993 por Patrick Volkerding. Basada originalmente en SLS Linux, Slackware es la distribución de GNU/Linux más antigua aún en mantenimiento._

_**Debian** representa el **éxito de la comunidad**, garantizando la libertad de sus usuarios y apoyo desinteresado de los mismos para hacer de Debian una distribución de excelente calidad._ 

_**Red Hat** representa el **éxito de la empresa** y consolida a Linux dentro de los servidores corporativos._

## Instalación

* Para instalar mínima de Linux se requiere 600MB de disco libre para escritorio y 1.6 GB para una versión servidor con 64 MB de RAM.

* Linux tiene su propio sistema de archivos ext2,ext3,ext4,y btrfs 

* Utiliza la Swap como una memoria virtual en el disco duro Linux soporta: FAT, NTFS, JFS, XFS 

* Para instalar Linux se necesita como mínimo una particion Swap y una partición raíz. 

Ver más en el esquema de particiones que sugiere [Red Hat](https://access.redhat.com/documentation/es-es/red_hat_enterprise_linux/6/html/installation_guide/s2-diskpartrecommend-x86) y una guía gráfica de instalación para [Fedora 26](https://lleksah.wordpress.com/2017/09/25/switching-from-ubuntu-to-fedora/).


## Directorios: 

![alt text](https://github.com/jinca/GNU_Linux/blob/master/Images/filesystem(jinca).png)

- [x] / ----> raiz 
- [x] /boot ----> directorio de arranque del sistema operativo configuración de grub 
- [x] /etc  ----> archivos de configuración 
- [x] /home ----> directorios de los usuarios 
- [x] /usr ----> binarios,librerías,documentacion 
- [x] /var ----> archivos que crecen o modifican (correo,base de datos, logs) 
- [x] /dev ----> referencia de los perifericos (hardware) 
- [x] /proc ----> directorio temporal con punteros a los recursos fisicos de la computadora 
- [x] /root ----> directorio principal de Dios 
- [x] /tmp ----> directorio temporal 
- [x] /opt ----> algunos programas instalan aquí 
- [x] /media---> sirven para mostrar dispositivos de media, unidades de red. 
- [x] /mnt ----> punto de montaje temporal
- [x] /bin ----> se encuentran todos los archivos ejecutables del sistema. Están muchos de los comandos que usamos habitualmente.

## Importancia de GNU/Linux

:penguin: Todas las supercomputadoras del TOP500 liderada por China, utilizan Linux en un [100%](https://www.top500.org/statistics/details/osfam/1).

:penguin: [Android](https://en.wikipedia.org/wiki/Android_(operating_system)) ha nacido basado en el kernel de Linux.

:penguin: Ha dado lugar a la creación de Hardware Libre como [Arduino](https://www.arduino.cc/en/Main/FAQ#toc2), bajo la licencia LGPL.

:penguin: Muchas [comunidades de software libre](http://www.linux-magazine.com/Online/Blogs/Off-the-Beat-Bruce-Byfield-s-Blog/What-makes-for-a-community-distribution) han nacido para dar soporte a las diferentes distribuciones.

:penguin: Linux es [educación](https://opensource.com/education/14/9/linux-education-public-school).

:penguin: Ahorra [energía](http://linrunner.de/en/tlp/docs/tlp-linux-advanced-power-management.html).

![alt text](https://github.com/jinca/GNU_Linux/blob/master/Images/linux_events30.jpg)

## Open Source vs Software Libre

En 1997, Eric Raymond escribe "La catedral y el Bazar", este ensayo analiza dos modelos de producción de software bien diferenciados. Por un lado, la catedral, que representa el modelo de desarrollo más hermético y vertical característico del Software propietario; y por el otro el bazar, con su dinámica horizontal y "bulliciosa", que caracterizó al desarrollo del kernel Linux y otros proyectos de software libre que se potenciaron con el trabajo comunitario a través de Internet del código abierto.

[ESR](https://es.wikipedia.org/wiki/Eric_S._Raymond) es una figura líder en el Movimiento del Open Source y el Código abierto.

## Diferencias:

- El Software Libre hace hincapié en cuestiones éticas y morales relacionadas con el software, viendo el aspecto técnico como secundario, a diferencia del movimiento Open Source que lo establece como prioritario. 

- Con una aplicación desarrollada bajo los estándares del Software Libre puedes obtener remuneración por conceptos de desarrollo, soporte y puesta a punto siempre y cuando entregues los fuentes, a diferencia del movimiento Open Source que no te obliga a hacerlo. Todos los productos desarrollados en Software Libre así como sus derivados siempre deben ser libres, a diferencia de Open Source. Leer [más](https://hipertextual.com/archivo/2014/05/diferencias-software-libre-y-open-source/)...
 
