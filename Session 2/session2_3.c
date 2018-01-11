#include <stdio.h>
#include <stdlib.h>
/*include<stdlib.h> contiene las variables para los valores de retorno.
		EXIT_SUCCESS equivale a 0.
		EXIT_FAILURE equivale a 1.*/

int main(void){
	/* Variables*/
	char x = 'x';

	char y1[] = "hola";
	char y2[] = {'h', 'o', 'l', 'a'};
	char *z = &x;
	char *p1[] = &y2
	//	& se llama Ampersand
	//	& <var_name> Retorna la dirección de memoria de la variable
	//								[A]Ampersand = [A]ddress (Direccion)
	//	<var_name> variable que recibir;a una Direccion de memoria
	/* Cuerpo del programa*/
	printf("Debe decir %c.\n", x);
	printf("Primer %s\n", y1);
	printf("Segundo ");
		for (int i = 0;i < 4;i++){
	printf("%c", y2[i]);
	}
	printf("La variable 'x' tiene por valor '%c' y está en la dirección en hexadecimal '%x'\n", *z, &x);
	/*echo "$?" muestra el último programa que ejecuté.
	return EXIT_SUCCESS; equivale a return 0;*/
	return EXIT_SUCCESS;
}

//	char *z = &x;
