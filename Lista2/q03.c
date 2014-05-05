#include <stdlib.h>
#include <stdio.h>

int main () {
	int x, y, z, op;
	printf ("Digite tres valores\n");
	scanf ("%d", &x);
	scanf ("%d", &y);
	scanf ("%d", &z);
	op = ((x*x) + (y*y) + (z*z));
	printf ("\n A soma dos quadrados dos valores eh: %d \n", op);
	return 0;
}
