#include <stdio.h>
#include <conio.h>

void main()
{
  FILE *arq;
  char Linha[100];
  char *result;
  int i;
  clrscr();
  arq = fopen("ArqTeste.txt", "rt");
  if (arq == NULL) 
  {
     printf("Problemas na abertura do arquivo\n");
     return;
  }
  i = 1;
  while (!feof(arq))
  {
      result = fgets(Linha, 100, arq);
      if (result) 
	  printf("Linha %d : %s",i,Linha);
      i++;
  }
  fclose(arq);
}