#include <stdio.h>
#include <stdlib.h>

int main () {
	float x, op;
	printf ("\n Insira uma quantidade de metros\n");
	scanf ("%d", &x);
	op = x * 100;
	printf ("Essa qtd em cm eh: %d", op);
	return 0;
}