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
	while (i < 9) {
		if (vet[i] == vet[i + 1])
			printf ("\nExiste valores iguais a: %d\n", vet[i]);
		i++;
	}

	return 0;
}