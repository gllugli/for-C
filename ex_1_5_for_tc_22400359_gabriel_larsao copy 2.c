/*
Elaborar um programa C para computar a média de N números reais. Você receberá
um número real e irá realizar a soma dele com todos os seus antecessores até chegar
a zero
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    float num = 0.0, soma = 0.0, media = 0.0, i = 0.0;

    printf("\nDigite o número que você deseja computar a média: ");
    scanf("%f", &num);

    for (i = num; i >= 0; i--) {
        soma += i;
    }

    media = soma / num;

    printf("\nA média de %.0f e todos os seus antecessores é igual a: %.1f", num, media);

    return 0;
}