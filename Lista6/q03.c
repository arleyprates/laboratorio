#include <stdio.h>
#include <stdlib.h>
	
int main (void ) {
      int i = 0;
      char linha[100];
      FILE *arquivo;
      char nome[20];
      printf( "Digite nome do arquivo desejado pra saber quantoas linhas tem. Ex: a.txt\n");
      scanf ("%s", &nome);
      if ((arquivo = fopen (nome, "r")) == NULL) {
            printf("\nErro ao abrir o arquivo.\n");
            exit(1);
      }
      while (!feof (arquivo)) {
            fgets (linha, 100, arquivo);
            i++;
      }
      printf ("O arquivo tem %d linhas", i);
      fclose (arquivo);
      getchar ();
}
