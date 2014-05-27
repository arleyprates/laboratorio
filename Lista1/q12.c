#include <stdio.h>
#include <stdlib.h>

int main () {
	float x, y, op;
	printf ("\nQuanto voce ganhe por hora?\n");
	scanf ("%f", &x);
	printf ("\nQuantas horas vc trabalhou esse mes\n");
	scanf ("%f", &y);
	op = x *y;
	printf ("\nSeu salario eh de: %f\n", op);
	return 0;
}