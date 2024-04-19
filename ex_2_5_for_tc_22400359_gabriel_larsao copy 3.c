/*
Faça um programa que imprime todos os números entre 30 e 5 (nesta ordem)
divisíveis por 3, e no final imprime sua soma
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int i = 0.0, soma = 0.0;

    for (i = 30; i >= 5; i--) {

        if ((i % 3) == 0) {
            soma += i;
        }
    }

    printf("\nA soma de todos os números divisíveis por 3 entre 30 e 5 é igual a: %d", soma);

    return 0; 
}