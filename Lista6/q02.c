#include <stdio.h>
#include <stdlib.h>

int main () {
      char linha[100];
      FILE *arquivo;
      char *nome = "arq.txt";
      printf ("Digite um texto. E para encerrar,digite o numero zero.\n");
      if ((arquivo = fopen (nome, "w+")) == NULL) {
            printf ("\nNao foi possivel abrir o arquivo.\n");
            exit(1);
      }
      gets (linha);            	
      while (!feof (stdin) && linha[0] != '0')  {
            strcat (linha, "\n");
            fputs (linha, arquivo);
            gets (linha);
      }
      rewind (arquivo); 
      printf ("\nFim da escrita e inicio da leitura.\n");
      fgets(linha, 100, arquivo);
      while (!feof (arquivo)) {
            printf ("%s",linha);
            fgets (linha, 100, arquivo);
      }
      fclose (arquivo);
      getchar ();
}
