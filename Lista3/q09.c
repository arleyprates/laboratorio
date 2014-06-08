#include <stdio.h>
#include <stdlib.h>

int main () {
	int i;
	for (i = 0; i < 100; i++)
		printf ("\n%d\n", i);
	i =  0;
	printf ("for");
	while (i != 100)
		printf ("\n%d\n", ++i);
	i = 0;
	printf ("while");
	do
		printf ("\n%d\n", i++);
	while (i < 101);
	printf ("do while");
	return 0;
}