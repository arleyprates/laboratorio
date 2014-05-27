#include <stdio.h>
#include <stdlib.h>

int main () {
	flat x, y, op;
	printf ("\nDigite o tamanho do Download\n");
	scanf ("%f", &x);
	printf ("\nDigite a velocidade do link\n");
	scanf ("%f", &y);
	op = x / y;
	printf ("O tempo aproximadamente eh de: %f", op);
	return 0;
}