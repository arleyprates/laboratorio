#include <stdio.h>

int main () {
	int vet[10], i, maior, menor, elemento, posicao;
	i = 0;
	while (i < 10) {
		scanf (" %d ", &vet[i]);
		i++;
	}
	i = 0;
	while (i < 10) {
		printf (" %d ", vet[i]);
		i++;
	}
	i = 1;
	maior = vet[i];
	while (i < 10) {
		
		if (vet[i] > maior) {
			maior = vet[i];
			elemento = vet[i];
			posicao = i;

		}
		if (vet[i] < menor) {
			menor = vet[i];
			elemento = vet[i];
			posicao = i;
		}
		i++;
	}
	printf ("\nO maior elemento eh: %d e sua posicao eh: %d\n", elemento, posicao);
}

