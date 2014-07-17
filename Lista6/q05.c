#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int i = 0;
    char linha[300];
    FILE *arquivo, *arquivo2;
    char nome[20];
    char arq1;
    printf ("Digite nome do arquivo. Ex: bla.txt\n");
    scanf ("%s", &nome);
    if ((arquivo = fopen (nome, "r")) == NULL) {
        printf ("\nNao foi possivel abrir o arquivo.\n");
        exit (1);
    }
    if ((arquivo2 = fopen ("arqualquer", "w")) == NULL) {
        printf ("\nNao foi possivel abrir o arquivo.\n");
        exit (1);
    }
    while (arq1 != EOF) {
        putc(toupper(arq1),arquivo2);
		arq1 = fgetc(arquivo);
    }
    fclose (arquivo);
    fclose (arquivo2);
    getchar (); 
}
