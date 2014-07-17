#include <stdio.h>

int main()
  {
    FILE *arquivo;
    char nome[5]="samu";
    int idade=34;
    float altura=1.82;

    if((arquivo = fopen("samu.dat","wb")) == NULL)
      {
        printf("Erro ao abrir arquivo!!!\n\n");
        exit(1);
      }

    fwrite(&nome,sizeof(nome),1,arquivo);
    fwrite(&idade,sizeof(idade),1,arquivo);
    fwrite(&altura,sizeof(altura),1,arquivo);

    fclose(arquivo);

    return(0);
  }
