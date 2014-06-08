#include <stdio.h>
#include <stdlib.h>

int main () {
	int vet[15];
	int i, media = 0;
	while (i < 15) {
		printf ("\nDigite a Nota do aluno: \n");
		scanf ("%d", &vet[i]);
		media = media + vet[i];
		i++;
	}
	printf ("\nA media da turma eh: %d\n", media / 15);

	return 0;
}