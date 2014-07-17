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
	char matricula[10], ano_nascimento[10];
	char sobrenome[10];
	char arq1[2000];
	char linha[300];
	char txt;
	FILE *arquivo;
	menu = 0;
	printf ("Quantos alunos serao armazenados:\n");
	scanf ("%d", &quantidade);
	aux = (aluno*) malloc (quantidade * sizeof (aluno));
	if ((arquivo = fopen ("nome.txt", "w")) == NULL) {
        printf("\nErro ao abrir o arquivo.\n");
        exit(1);
    }
	while (menu < quantidade) {
		printf ("menu: %d\n", menu);
		printf ("quantidade: %d\n", quantidade);
		printf ("Insira a matricula do aluno\n");
		scanf ("%s", &matricula);
		aux->matricula = matricula;
		printf ("Insira o ano de nascimento do aluno\n");
		scanf ("%s", &ano_nascimento);
		aux->ano_nascimento = ano_nascimento;
		printf ("Insira o sobrenome do aluno\n");
		scanf ("%s", &sobrenome);
		strcpy (aux->sobrenome, sobrenome);
		aux++;
		quantidade--;
		printf ("inserido!\n");
        fputs (matricula, arquivo);
        fputs ("\n", arquivo);
        fputs (ano_nascimento, arquivo);
        fputs ("\n", arquivo);
        fputs (sobrenome, arquivo);
        fputs ("\n", arquivo);
      	
      	printf("gravado no arquivo\n");
	}
    rewind (arquivo);
	do {
		txt = getc (arquivo);
        printf ("%c", txt);
 	} while (txt != EOF);
		
	aux = NULL;
	free (aux);
	fclose (arquivo);
	return 0;
}
