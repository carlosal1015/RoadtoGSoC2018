# Fedora

<p align="center">
<img src="https://github.com/jinca/GNU_Linux/blob/master/Images/Fedora_logo.svg">
</p>


## Comienzos e historia

Fedora es un sistema operativo basado en Linux utilizando [RPM](https://es.wikipedia.org/wiki/RPM_Package_Manager) creado el 06 de Noviembre del año 2003, desarrollado por la comunidad del proyecto Fedora, patrocinado por Red Hat.

Desde Febrero 2016, se estima que Fedora tiene más de 1.2 millones de usuarios, incluyendo a [Linux Torvalds](http://www.tuxradar.com/content/interview-linus-torvalds-linux-format-163), el creador del kernel de Linux.  

La versión actual de Fedora es F27; y puede ser obtenida [online](https://getfedora.org/). Desde F21, se tienen tres ediciones:

* Fedora Workstation, para computadoras de uso personal.
* Fedora Server, para servidores que soportan negocios.
* Fedora Atomic, para soportar Cloud Computing. 

Fedora desarrolla el software de forma **upstream** para poder corregir bugs e integrar nuevos parches, previo consentimiento del mantenedor del software. Es así que Fedora es la fuente upstream de la distribución comercial Red Hat. 

Fedora se enfoca en la innovación y en la integración de nuevas tecnlogías en cada una de sus nuevas versiones, y se tiene un ciclo de vida de 6 meses entre una versión y otra. Los lanzamientos de las versiones usualmente se dan en los meses de Julio y Noviembre. Para cambiar de versión no es necesario una reinstalación, se puede dar tan solo con seguir [5 pasos](https://fedoramagazine.org/upgrade-fedora-workstation-fedora-27-beta/). 

El entorno de escritorio que viene por defecto en Fedora es GNOME, pero es posible cambiarlo e instalar KDE, Plasma, Xfce, LXDE, MATE o Cinnamon. A esto se llama, los [spin de Fedora](https://spins.fedoraproject.org/es/).

Cuando se trata de una selección depurada de paquetes de software de propósito específico y contenido, estamos hablando de [Fedora Labs](https://labs.fedoraproject.org/es/).Ejemplo, Fedora para Astrónomos, la Suite Robotica, la versión de Seguridad, Fedora para diseñar, o jugar, entre otras. Esta colección es depurada y mantenida por miembros de la Comunidad Fedora, y pueden ser instaladas como versiones completas autónomas de Fedora o como complementos a instalaciones de Fedora existentes.

 
## Comunidad

Los miembros de la comunidad de Fedora usualmente postean sus experiencias con Fedora en el [Planet de Fedora](http://fedoraplanet.org/) y en caso desee enterarse de las novedades y artículos relacionados a Fedora, éstos son publicados en el [Fedora Magazine](https://fedoramagazine.org/). 

En general, la más amplia documentación se tiene en la [Wiki de Fedora](https://fedoraproject.org). En esta página se puede encontrar información desde [cómo unirte a Fedora](https://fedoraproject.org/wiki/Join), a través de las [listas](https://lists.fedoraproject.org/archives/) y [canales de IRC](https://fedoraproject.org/wiki/IRC), de acuerdo a las preferencias y skills que Ud. tenga. 

Es recomendable leer toda la documentación posible que ofrece Fedora para que en caso Ud. desee esté listo para poder contirbuir. Lo primero que debe hacer es crear su [cuenta FAS](https://admin.fedoraproject.org/accounts/) para que se pueda tener acceso tanto a las wikis y demás herramientas con las que trabaja Fedora.

## Las 4 Fs

_"Fedora siempre es libre para que cualquiera lo use, modifique y distribuya. Lo construyen y usan personas por todo el mundo que trabajan en conjunto como una comunidad: el Proyecto Fedora."_

* Features  
* Friends
* Freedom
* First

<p align="left">
<img src="https://github.com/jinca/GNU_Linux/blob/master/Images/FedoraPeru.png">
</p>


<p align="right">
<img src="https://github.com/jinca/GNU_Linux/blob/master/Images/4Foundations.png">
</p>

Gracias al apoyo de Fedora LATAM es que se ha logrado organizar eventos 

## Manejador de Paquetes

DNF es un gestor de paquetes escrito en python, que usa curl, y apareció por primera vez disponible para la versión de F18 y es el gestor de paquetes oficial para Fedora 22.
Nació con la idea de mejorar las funciones de YUM. Entre las grandes mejoras nos encontramos que los paquetes se almacenan por defecto en el cache del sistema y el uso de meta datos, teniendo así un especie de función aprueba de errores, facilitando la descarga de los paquetes a instalar o actualizar, en caso de que ocurra algún problema externo podemos recuperar nuestra instalación a partir del ultimo paquete descargado. 

Con DNF podemos instalar, desinstalar, actualizar, remover y listar paquetes, entre otras muchas [opciones más](https://fedoraproject.org/wiki/DNF?rd=Dnf).

Un ejemplo práctico para poder instalar y desintalar GIMP (GNU Image Manipulation Program) es:

`$sudo dnf install gimp`

`$sudo dnf remove gimp`
 
## Más conceptos Fedora

* [EPEL](https://fedoraproject.org/wiki/EPEL/es): Paquetes Adicionales para Linux Empresarial
* [Rawhide](https://fedoraproject.org/wiki/Releases/Rawhide?rd=Releases/Rawhide/en): corresponde al respositorio que contiene el atual desarrollo de Fedora.
* [Atomic](http://www.projectatomic.io/docs/introduction/): es un sistema operativo basado en Kubernetes y contenedores.

## GSoC for Fedora

El GSoC es un programa de respalda Google para estudiantes de universidades e institutos a nivel mundial para poder mejorar proyectos de Software Libre y Open Source. Hay muchos ejemplos de proyectos a los que los estudiantes pueden acceder para consultar y proponer desarrollo en el proyecto Fedora. 

Algunos proyectos anteriores que pueden ser tomados como referencia: [GSoC 2016](https://fedoraproject.org/wiki/Summer_coding_ideas_for_2016), [GSoC 2015](https://fedoraproject.org/wiki/GSOC_2015/Student_Application_gnarula), [GSoC 2014](https://fedoraproject.org/wiki/Summer_coding_ideas_for_2014), [entre otros](https://fedoraproject.org/wiki/Summer_of_Code).

