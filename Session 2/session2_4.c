#include <stdio.h>
#include <stdlib.h>

int main(void){

int i, j;

char x = 'x';

char y1[] = "hola";
char y2[] = {'h', 'o', 'l', 'a', '\0'};
char *py1;
py1 = &(y1[0]);

printf("Variable 'z'\n");
for (i = 0; i <4; i++){
printf("Caracter [%i]: {Val: '%c' Dir: '%x'}\n", i, y1[i],&(y1[i]));
	}

	printf("Variable 'py1'\n");
	printf("* Valor: '%c\n'", *py1);
	printf("* Dirección: '%x'\n", py1);

	printf("Sumando valores a py1\n");
	for (j=0;j<4;j++){
		printf("py1 + [%i]: {Val %c, Dir %x}\n", i, *(py1 + j), (py1 + j));

	}
	return EXIT_SUCCESS;
}
//Dejar vacios puede tener un impacto en la seguridad.
