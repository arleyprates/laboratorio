#include <stdio.h>
#include <stdlib.h>

int main () {
	float n1, n2, n3, n4, op;
	printf ("\n Insira suas quatro notas\n");
	scanf ("%d", &n1);
	scanf ("%d", &n2);
	scanf ("%d", &n3);
	scanf ("%d", &n4);
	op = (n1 + n2 + n3 + n4) / 4
	printf ("A sua media eh %d", op);
	return 0;
}