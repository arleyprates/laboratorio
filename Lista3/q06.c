#include <stdio.h>
#include <stdlib.h>

int main () {
	int x, i;
	x = 0;
	for (i = 0; i < 50; i++) {
		printf ("\nA soma dos 50 primeiros numeros pares sao: %d\n", x);
		x = x + 2;
		}
	return 0;
}