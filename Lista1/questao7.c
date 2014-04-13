#include <stdio.h>
#include <stdlib.h>

int main (){
	int x, y, soma;
	printf ("\nDigite um numero: ");
	scanf ("%d", &x);
	printf ("\nDigite outro numero: ");
	scanf ("%d", &y);
	soma = x + y;
	printf ("\nA soma eh: %d\n", soma);
	return 0;
}