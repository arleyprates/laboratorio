#include <stdlib.h>
#include <stdio.h>

int main () {
	float x, op1, op2;
	printf ("Um premio de 780,000,00 eh dividido com tres pessoas\n");
	x = 780;
	op1 = x*46/100;
	printf ("\n Seu premio de 46 por cento eh: %5.2f \n", op1);
	op2 = x*32/100;
	printf ("Seu premio de 32 por cento eh: %5.2f \n", op2);
	printf ("Seu premio de 12 por cento eh: %5.2f \n", x - (op1 + op2));
	return 0;
}
