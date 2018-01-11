#include <stdio.h>

int main(int argc, char *argv[]){
    /*
    *   argc: Es el nùmero de argumentos que recibe nuestro programa
    *   cuando es llamado desde la lìnea de comandos (y desde cualquier otro lado)
    *
    *
    *
    *   El primer argumento es el nombre del ejecutable, por lo cual, si no le pasamos argumentos al programa,
    *   imprimirà 1.
    *
    *   argv: contiene los valores de los argumentos ingresados por
    *   líneas de comandos (y desde cualquier otro lado). Los argumentos ingresados, cada espacio significa
    *   un nuevo argumento.
    *   Los argumentos ingresados son separados por espacios siempre y cuando no esten sobre comillas
    *   o no sean escapados ("\<espacios>")
    *
    *   Los argumentos son ordenados en un lista de la siguiente formato
    *   arg[0] <el nombre del programa>
    *   arg[1]  argumento-1
    *   arg[2]  argumento-2
    *   arg[3]  argumento-3
    *   *****       *****
    *
    *   Notas:
    *           las expresiones como "%d", "%s" son especificadores de
    *           formato (format specifiers)
    *
    *           Las expresiones como "\t" a "\n" se conocen como secuencia de escape.
    *
    *           Las expresiones como:
    *           int i = 1;
    *           int argc;
    *           char *argv[];
    *           Son declaraciones de variables:
    *
    *           [modificador] <tipo> <nombre_>
    */
    for (int i = 1; i < argc; i++){
    //printf("%d\t", i);
    //printf("%d\n", argc);
    printf("%s", argv[i]);
    //printf("%s\n", argv[i]); // Se imprime el valor
    }
    printf("");
}
