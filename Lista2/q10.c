#include <stdio.h>
#include <stdlib.h>

int main () {
	int x, y, opcao;
	printf ("\n::Menu:: \n");
	printf ("1 - Soma de dois numeros");
	printf ("2 - Diferenca entre dois numeros");
	printf ("3 - Produto entre 2 numeros");
	printf ("4 - Divisao entre 2 numeros");
	scanf ("%d", opcao);
	if (opcap == 0)
		return 0;
	prinf ("\nDigite dois valores!\n");
	scanf ("%d", x);
	scanf ("%d", y);
	switch (opcao) {
	case 1 {
		op = x + y;
	}
	case 2 {
		op = x - y;	
	}
	case 3 {
		op = x * y;
	}
	case 4 {
		op = x / y;
	}
	default {
		printf ("\nDigite um valor valido ou 0 para sair!\n")
		if (opcap == 0);
			break;
	}
	}
	return 0;
}