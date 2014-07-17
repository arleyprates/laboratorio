#include <stdio.h>

int main(int argc, char *argv[])
  {
    char caracter;
    FILE *arquivo;    

    if(argc < 2)
      {
        printf("\nErro: Digite o nome do arquivo !!!\n\n");
        exit(1);
      }

    printf("\n%s\n\n",argv[1]);

    if((arquivo = fopen(argv[1],"r")) == NULL)
      {
        printf("Erro ao abrir arquivo!!!\n\n");
        exit(1);
      };

    do
      {
        caracter = getc(arquivo);
        putchar(caracter);
      }
    while(caracter != EOF);

    printf("\n\n");

    fclose(arquivo);

    return(0);
  }