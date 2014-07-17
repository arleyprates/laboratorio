#include <stdio.h>

int main(int argc, char *argv[])
  {
    FILE *original,*copia;
    char caracter;

    if(argc < 3)
      {
        printf("\nSintaxe correta:\n\n");
        printf("copiar ARQUIVO_ORIGEM ARQUIVO_DESTINO\n\n");
        exit(1);
      }

    
    while(argv[1])
      {
         if(*argv[1] == *argv[2])
           break;
         printf("\nO nome do arquivo original não pode ser igual ao da\
 cópia.\n\n");
         exit(1);
      };


    if((original = fopen(argv[1],"rb")) == NULL)
      {
        printf("\nErro ao abrir o arquivo original.\n\n");
        exit(1);
      }             

    if((copia = fopen(argv[2],"wb")) == NULL)
      {
        printf("\nErro ao abrir o arquivo cópia.\n\n");
        exit(1);
      }

    while(!feof(original))
      {
        caracter = getc(original);
        if(!feof(original))
          putc(caracter,copia);
      }

    fclose(original);
    fclose(copia);
              
    printf("\n%s copiado com sucesso com o nome de %s.\n\n",argv[1],argv[2]);

    return(0);
  }