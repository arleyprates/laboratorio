#include <stdio.h>
#include <stdlib.h>

int main () {
	int vet[10];
	int i = 0;
	while (i < 10) {
		printf ("\nDigite valores para o vetor: \n");
		scanf ("%d", &vet[i]);
		i++;
	}
	i = 0;
	while (i < 10) {
		printf ("%d ", vet[i]);
		i++;
	}
	i = 10;
	printf ("\n");
	while (i > 0) {
		printf ("%d ", vet[i]);
		i--;
	}
	return 0;
}