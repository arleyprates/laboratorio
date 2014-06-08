#include <stdio.h>
#include <stdlib.h>

int main () {
	int i, x = 0;
	scanf ("%d", &i);
	do {
		x++;
		if (i%x == 0)
			printf ("\nSeu divisor: %d\n", x);
	} while (x < i);
	return 0;
}