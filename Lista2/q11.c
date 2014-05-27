#include <stdio.h>
#include <stdlib.h>

int main () {
	float x, y;
	printf ("\nDigite sua idade e o tempo de trabalho!\n");
	scanf ("%f", &x);
	scanf ("%f", &y);
	if (y >= 30)
		printf ("\nPode se aposentar! por tempo de trabalho\n");
	if (x >= 65)
		printf ("\nPode se aposentar! por idade\n");
	return 0;
}