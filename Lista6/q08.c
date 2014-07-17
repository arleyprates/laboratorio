#include <stdio.h>

int main(int argc,char *argv[])
  {

    if(argc != 3)
      {
        printf("Erro !!! \n");
        printf("Sintaxe correta: renomear NOME_ANTIGO NOVO_NOME\n");
        exit(1);
      }

    if(rename(argv[1],argv[2]))
      printf("Erro ao renomear arquivo!\n");

    return(0);
  }
