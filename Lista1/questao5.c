#include <stdio.h>
#include <stdlib.h>

int main (){
	char x[255], y[255];
	printf ("\nDigite uma string qualquer: ");
	scanf ("%s", &x);
	printf ("\nDigite outra string qualquer: ");
	scanf ("%s", &y);
	printf ("\nA primeira strings foi: %s\n", x);
	printf ("\nA segunda strings foi: %s\n", y);
	printf ("A segunda letra da primeira string foi: %c\n", x[1]);
	printf ("A segunda letra da segunda string foi: %c\n", y[1]);
	return 0;
}