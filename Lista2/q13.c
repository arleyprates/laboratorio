#include <stdio.h>
#include <stdlib.h>

int main () {
	flat x, op;
	printf ("\nDigite o valor da venda:\n");
	scanf ("%f", &x);
	if (x >= 100000) {
		op = 700 * (16 / 100);
		op = 700 + op;
		printf ("Sua comissao eh %f\n", op);
	}
	if (x < 100000 && x >= 80000) {
		op = 650 * (14 / 100);
		op = 650 + op;
		printf ("Sua comissao eh de %f\n", op);
	}
	if (x < 80000 && x >= 60000) {
		op = 650 * (14 /100);
		op = 650 + op;
		printf ("Sua comissao eh de %f\n", op);
	}
	if (x < 60000 && x >= 40000) {
		op = 550 * (14 / 100);
		op = 550 + op;
		printf ("Sua comissao eh de %f\n", op);
	}
	if (x < 40000 && x >= 20000) {
		op = 500 * (14 / 100);
		op = 500 + op;
		printf ("Sua comissao eh de %f\n", op);
	}
	if (x < 20000) {
		op = 400 * (14 / 100);
		op = 400 + op;
		printf ("Sua comissao eh de %f\n", op);
	}
	return 0;
}