#include <stdio.h>
#include <stdlib.h>

int main () {
	float x, op;
	printf ("\nDigite o tamanho do lado do quadrado\n");
	scanf ("%f", x);
	op = x * x;
	op = op * op;
	printf ("O dobro dessa area eh: %f", op);
	return 0;
}