/*
A partir do exercício 3 faça um programa que deverá exibir os resultados da
conversão, parando a cada 25 valores exibidos e solicitar ao usuário que digite a
tecla “ENTER” para continuar, após o usuário digitar “ENTER” a tela deverá ser limpa
e a exibição continuar. A cada tela exibida o programa deverá exibir o seguinte
cabeçalho.

            CONVERSAO FAHREINHEIT – CELSIUS
    CELSIUS                                 FAHREINHEIT

Dicas:
a) Utilize a função getche() para solicitar a tecla “ENTER” que tem código ASCII Hexadecimal
igual a 0x0d.
b) Para limpar a tela inclua a biblioteca sdtlib.h em seu programa e chame a função
system(“cls”);
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>


int main() {

    setlocale(LC_ALL, "portuguese");

    float conversao, i = 0.0, tecla;

    for (i = 50; i >= -50; i--) {

        conversao = (5.0 / 9.0) * (i - 32.0);
        
        printf("\nFahreinheit: %.1f \t\tCelcius: %.1f", i, conversao);
        
    	if (i == 25 || i == 0 || i == -25) {
            printf("\nAperte a tecla enter se deseja continuar.");
            tecla = getche();

            system("cls");
        }
    }

    return 0;
}