#include <stdlib.h>
#include <stdio.h>

int main () {
	float x, op;
	printf ("Digite o valor de seu salario\n");
	scanf ("%f", &x);
	op = x*25/100;
	printf ("\n Seu novo salario com aumento de 25 por cento eh: %5.2f \n", op+x);
	return 0;
}
