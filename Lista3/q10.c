#include <stdio.h>
#include <stdlib.h>

int main () {
	int i, c = 1;
	char x[100];
	scanf ("%c", &x);
	for (i = 0; i < 100; i++) {
		if (x[i] == '1')
			c++;
	}
	printf ("A quantidade de 1s foi: %d", c);
	return 0;
}