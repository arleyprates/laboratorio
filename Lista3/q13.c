#include <stdio.h>
#include <stdlib.h>

int main () {
	int x, soma, i = 0;
	do {
		i++;
		scanf ("%d", &x);
		soma = soma + x;
	} while (i < 10);
	printf ("\nA soma dos numeros digitados eh: %d\n", soma);
	return 0;
}