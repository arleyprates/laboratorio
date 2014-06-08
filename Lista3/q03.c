#include <stdio.h>
#include <stdlib.h>


int fib (int n) {
	if (n < 2)
		return n;
	else
		return fib (n -1) + fib (n - 2);
	return n;
}
int main () {
	int i, j, t, k;
	printf ("\nDigite um numero\n");
	scanf ("%d", &x);
	op = fib (x);
	printf ("Um numero a mais da sequencia de Fibonnaci eh de:", op);
	return 0;
}