#include <stdio.h>
#include <stdlib.h>

int main (){
	char x;
	printf ("\nInforme um caracter qualquer: ");
	scanf ("%c", &x);
	printf ("\nO caracter informado foi: %c e seu codigo eh: %d\n", x, x);
	return 0;
}