#include <stdio.h>
#include <stdlib.h>

int main () {
	float x, y, op;
	char c;
	printf ("\nEntre com sua altura:\n");
	scanf ("%f", &x);
	printf ("Digite seu Sexo");
	scanf ("%c", &c);
	if (c == 'm') {
		op = (72.7 * x) - 58;
		printf ("\nSeu peso ideal eh: %f\n", op);
	} else {
		if (c == 'f') {
			op = (61.1 * x) - 44.7;
			printf ("Seu peso ideal eh: %f", op);
		}
	}
	printf ("\nDigite seu peso:\n");
	scanf ("%f", y);
	if (y == op)
		printf ("\nSeu peso esta ideal\n");
	if (y > op)
		printf ("\nSeu peso esta a cima do peso ideal\n");
	if (y < op)
		printf ("\nSeu peso esta a baixo do peso ideal\n");
	return 0;
}