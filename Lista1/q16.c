#include <stdio.h>
#include <stdlib.h>

int main () {
	flat x, op;
	printf ("\nEntre com a sua altura :\n");
	scanf ("%f", x);
	op = (72.7 * x) - 58;
	printf ("\nSeu peso ideal eh: \n", op);
	return 0;
}