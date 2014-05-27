#include <stdio.h>
#include <stdlib.h>

int main () {
	float x, op;
	printf ("\nEntre com o peso de peixe:\n");
	scanf ("%f", x);
	if (x > 50) {
		op = x - 50;
		printf ("\nO valor excedente eh de:\n");
	}
	printf ("\nO valor o peso de peixe n excede o limite \n");
	return 0;
}