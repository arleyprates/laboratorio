#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
      int i = 0;
      char linha[300];
      FILE *arquivo;
      char nome[20];
      char nome2[20];
      char arq1[2000];
      char arq2[1000];
      char *nome3 = "arq3.txt";                  
      printf ("Digite nome do arquivo 1. Ex: a.txt\n");
      scanf ("%s", &nome);
      printf ("Digite nome do arquivo 2.\n");
      scanf ("%s", &nome2);
      if ((arquivo = fopen (nome, "r")) == NULL) {
            printf ("\nNao foi possivel abrir o arquivo.\n");
            exit (1);
      }
      while (!feof (arquivo)) {
            strcat (arq1, linha);
            fgets (linha, 300, arquivo);
      }
      fclose (arquivo);
      if ((arquivo = fopen (nome2, "r")) == NULL) {
            printf ("\nNao foi possivel abrir o arquivo.\n");
            exit (1);
      }
      while (!feof (arquivo)) {
            strcat (arq2, linha);
            fgets (linha, 300, arquivo);
      }                  
      strcat (arq1, arq2);
      fclose (arquivo);
      if ((arquivo = fopen (nome3, "w+")) == NULL) {
            printf ("\nNao foi possivel abrir o arquivo.\n");
            exit (1);
      } else {
            fputs (arq1, arquivo);
            printf ("Arquivo arq3.txt criado com sucesso!");
      }
      getchar (); 
}
