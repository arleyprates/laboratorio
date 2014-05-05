#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
	float x, y, h;
	printf ("Entre com os valores do trianguilo\n");
	scanf ("%f", &x);
	scanf ("%f", &y);
	h = x*x + y*y;
	h = (int)sqrt (h);
	printf ("O valor da hipotenusa eh: %f ", h);
	return 0;
}
