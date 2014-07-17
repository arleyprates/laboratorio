#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char nomeArq[200];
	char palavra[20];
	FILE *arquivo1;

	int conta1 = 0, repete = 0;
	int tam = strlen (palavra);
	char prox;

	printf ("Informe nome/endereco do arquivo1: ");
	scanf ("%s", &nomeArq);
	arquivo1 = fopen (nomeArq,"r");

	if (arquivo1 == NULL) {
		printf ("Nao foi possivel criar/abrir o arquivo.\n");
		exit (1);
	}
	printf ("Palavra a pesquisar: ");
	scanf ("%s", &palavra);
	while (conta1 == 0){
		prox = fgetc (arquivo1);
		if (prox == EOF)
			break;
		if (prox == palavra[conta1]){
			conta1++;
			if (conta1 == tam){
				conta1 = 0;
				repete++;
			}
		}
		else
			conta1 = 0;
	}
	printf("A palavra '%s' se repete %d vezes\n", palavra, repete);
	fclose (arquivo1); 
	return 0;
}