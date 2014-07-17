#include <stdio.h>
#include <ctype.h>

int main(int argc,char *argv[])
  {
    FILE * arquivo;
    char opcao[5];

    if(argc != 2)
      {
        printf("Erro !!! \n");
        printf("Sintaxe correta: apagar ARQUIVO\n");
        exit(1);
      }    
    
    printf("Deseja realmente apagar o arquivo %s (S/N)?",argv[1]);
    gets(opcao);

    if(toupper(*opcao) == 'S')
      if(remove(argv[1]))
        {
          printf("Erro ao tentar apagar arquivo.\n");
          exit(1);
        }
      else
        printf("Arquivo apagado com sucesso.\n");

    return(0);
  }