/*
Elabore um programa que gere a sequ�ncia dos n�meros inteiros, onde o usu�rio
dever� fornecer o valor inicial e o valor final dessa sequ�ncia.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int num_in = 0, num_fin = 0, i = 0;
	
	printf("\nDigite o n�mero inicial: ");
	scanf("%d", &num_in);
	
	printf("\nDigite o n�mero final: ");
	scanf("%d", &num_fin);
	
	for (i = num_in; i <= num_fin; i++) {
		printf("\n%i", i);
	}
	
	return 0;
}
