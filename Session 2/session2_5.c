// Programa que suma dos números complejos.
#include <stdio.h>
#include <stdlib.h>
#define complexi struct complex
struct complex{
/*Una estructura es una agrupacion de tipo de datos.
Make realiza intrucciones*/
int re;
int im;
};

complexi addComplex(complexi, complexi);

int main (void){
	complexi z;
	//struct complex z; Se pueden hacer operaciones de geometría
	z.re = 1;
	z.im = 2;
	complexi w;
	w.re = 3;
	w.im = 4;
	complexi x;
	x = addComplex(z, w);

	printf("z=%i+%ii\n", z.re, z.im);
	printf("w=%i+%ii\n", w.re, w.im);
	printf("x=%i+%ii\n", x.re, x.im);
	return EXIT_SUCCESS;
}
complexi addComplex(complexi z1, complexi z2){
	complexi result;
	result.re = z1.re + z2.re;
	result.im = z2.im + z2.im;

	return result;
}
