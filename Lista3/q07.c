#include <stdio.h>
#include <stdlib.h>

int main () {
	int x, y, primo;
	y = 2;
	printf ("\nDigite um numero maior do que 1\n");	
	scanf ("%d", &x);
	primo = 1;
	while (y <= x / 2) {
		if (x % y == 0) {
			primo = 0;
		}
		y = y + 1;
	}
	if (primo == 1)
		printf ("\nO numero %d eh primo \n", x);
	return 0;
}