#include <stdio.h>
#include <stdlib.h>

int main () {
	int i = 1000;
	while (i > 1) {
		if (((i % 3) == 0)  || ((i % 5)  == 0))
			printf ("%d ", i);
		i--;
	}
	return 0;
}