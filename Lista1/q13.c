#include <stdio.h>
#include <stdlib.h>

int main () {
	float f, c;
	printf ("\nDigite a temperatura atual em Farenheit\n");
	scanf ("%f", &f);
	c = (5 * (f - 32) / 9);
	printf ("Essa temperatura em graus Celsius eh: %f", c);
	return 0;
}