#include <stdio.h>
#include <stdlib.h>

int main (){
	int i, qpares;
	float n, media, soma, maior, menor, mediaPares;
	maior, menor = 0;
	while (n != 0){
		printf ("\nDigite um numero\n");
		scanf ("%f", &n);
		soma = soma + n;//Faz Soma
		i++;//Quantidade de numeros
		media = media + (soma / i * 1.0); //Faz a Media dos numeros
		if (maior < n)//O maior numero digitado
			maior = n;
		if (menor > n)
			menor = n;
		//O menor numero digitado
		if (n / 2 == 0) {
			qpares++;
			mediaPares = mediaPares + n;
			mediaPares = mediaPares / qpares; //Media dos Numeros pares
		}
		printf ("\nA soma dos numeros eh: %f\n", soma);
		printf ("\nA quantidade de numeros eh: %d\n", i);
		printf ("\nA media dos numeros eh: %f\n", media);
		printf ("\nO maior numero digitado: %f\n", maior);
		printf ("\nO menor numero digitado: %f\n", menor);
		printf ("\nA media dos pares: %f\n", mediaPares);
		if (n == 0)
			return 0;
	}
}