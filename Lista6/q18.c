#include <stdio.h>
#include <conio.h>
void main()
{
  FILE *arq;
  int i;
  int result;
  clrscr();
  arq = fopen("ArqGrav.txt", "wt"); 
  if (arq == NULL) 
  {
     printf("Problemas na CRIACAO do arquivo\n");
     return;
  }
  for (i = 0; i<10;i++)
  {
      result = fprintf(arq,"Linha %d\n",i);  					  
      if (result == EOF)		    
	  printf("Erro na Gravacao\n");
  }
  fclose(arq);
}
