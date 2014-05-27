#include <stdio.h>
#include <stdlib.h>

int main () {
	float x, y, op, op1, op2, op3;
	printf ("\nQuanto voce ganhe por hora?\n");
	scanf ("%f", &x);
	printf ("\nQuantas horas vc trabalhou esse mes\n");
	scanf ("%f", &y);
	op = x *y;
	printf ("\nSeu salario bruto eh de: %f\n", op);
	op1 = op * 0.08 / 100;
	printf ("\nSalario com desconto ao INSS\n", op);
	op2 = op * 0.05 / 100;
	printf ("\nSalario com desconto Do sindicato\n", op);
	op3 op * 0.11 / 100;
	op = op - (op1 + op2 + op3);
	printf ("\nO seu salario liquido eh: \n", op);
	return 0;
}