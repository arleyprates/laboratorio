#include <stdio.h>
#include <stdlib.h>

int main () {
	float x, y, op;
	char c;
	printf ("\nEntre com sua altura:\n");
	scanf ("%f", &x);
	printf ("\nDigite seu peso:\n");
	scanf ("%f", y);
	op = y / (x * x);
	
	if (op < 18.5)
		printf ("\nAbaixo do peso\n");
	if (op > 18.5 && y < 25)
		printf ("\nSaudavel\n");
	if (op > 24.9 && y < 30)
		printf ("\nPeso em excesso I\n");
	if (op > 30 < 35)
		printf ("\nObesidade grau I\n");
	if (op > 35 && y < 40)
		printf ("\nObesidade grau II severa\n");
	if (op >= 40)
		printf ("\nObesidade grau III morbida\n");
	return 0;
}