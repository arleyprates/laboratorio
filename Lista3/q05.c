#include <stdio.h>
#include <stdlib.h>

int main () {
	int x, y, i;
	printf ("\nDigite um numero N para saber seus multiplos\n");
	scanf ("%d", &x);
	y = x;
	printf ("\nOs N primeiros multiplos de %d ", x);
	for (i = 0; i < x; i++) {
		printf ("sao: %d\n", y);
		y = y + x;
	}
	return 0;
}