#include <stdio.h>
#include <stdlib.h>

int main () {
	int x, y;
	float z, op, op1;
	printf ("\nInsira dois numeros inteiros e um real:\n");
	scanf ("%d", x);
	scanf ("%d", y);
	scanf ("%f", z);
	op = y / 2;
	op1 = x * 2;
	op = op * op1;
	printf ("\nO produto do dobro do primeiro com metade do seungod eh: %f\n", op);
	op = x * 3 + z;
	printf ("\nA soma do triplo do primeiro com o terceiro eh: %f\n", op);
	op = z * z *z;
	printf ("\nO terceiro elevado ao cubo eh: %f\n", op);
	return 0;
}