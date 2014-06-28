#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void testa1 (char* texto, char* codificado, int* i) {
	if (texto[*i] == ' ') {
		codificado[*i] = ' ';
		(*i)++;
	}
	codificado[*i] = (texto[*i] + 3);
}

void testa2 (char* codificado, int* i) {
	if ((codificado[*i] > 'z') || ((codificado[*i] > 'Z') && (codificado[*i] < 'a')))
    	 		codificado[*i] -= 26;
}

void finaliza (char* codificado, int* i) {
	codificado[*i] = '\0';
}
void imprime (char* str) {
	printf("%s", str);
}
void troca (char *texto, char *codificado) {
	int i = 0;
	while (i <= strlen (texto) - 1) {
		testa1 (texto, codificado, &i);
		testa2 (codificado, &i);
		i++;
	}
	finaliza(codificado, &i);

}

int main () {
	char texto[100], codificado[100];
	char *str;
	gets (str);
	troca (texto, codificado);
	imprime (codificado);
	return 0;
}