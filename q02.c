#include <stdlib.h>
#include <stdio.h>

int main () {
	int x;
	printf ("\nDigite um numero:");
	scanf ("%d", &x);
	printf ("\n Seu antecessor eh: %d e seu sucessor: %d \n", x-1, x+1);
	return 0;
}
