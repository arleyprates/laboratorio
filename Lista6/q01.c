#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct registro {
	char matricula;
	char ano_nascimento;
	char sobrenome[10];
}aluno;

int main () {
	aluno *aux;
	int quantidade, menu;
	char matricula, ano_nascimento;
	char sobrenome[10];
	FILE *arquivo;
	menu = 0;
	printf ("Quantos alunos serao armazenados:\n");
	scanf ("%d", &quantidade);
	aux = (aluno*) malloc (quantidade * sizeof (aluno));
	arquivo = fopen ("arquivo", "w");
	while (menu < quantidade) {
		printf ("menu: %d\n", menu);
		printf ("quantidade: %d\n", quantidade);
		printf ("Insira a matricula do aluno\n");
		scanf ("%d", &matricula);
		aux->matricula = matricula;
		printf ("Insira o ano de nascimento do aluno\n");
		scanf ("%d", &ano_nascimento);
		aux->ano_nascimento = ano_nascimento;
		printf ("Insira o sobrenome do aluno\n");
		scanf ("%s", &sobrenome);
		strcpy (aux->sobrenome, sobrenome);
		aux++;
		quantidade--;
		printf ("inserido!\n");
	}
		
	aux = NULL;
	free (aux);
	fclose (arquivo);
	return 0;
}
