#include <stdlib.h>
#include <stdio.h>

int main () {
	float x, op;
	printf ("Quantos dias foram trabalhados\n");
	scanf ("%f", &x);
	op = x*8/100;
	printf ("O valor liquido descontado 8 por cento eh: %5.2f \n", (x*30) - op);
	return 0;
}
