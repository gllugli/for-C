/*
Sabendo que a 01 pé equivale a 0.3048m, faça um programa que mostre na tela a
conversão de metros para pés, de 0 a 100metros. Seu programa deverá exibir o
cabeçalho abaixo e a cada 20 valores exibidos na tela, seu programa deverá solicitar
ao usuário que digite a tecla ENTER pra continuar, após isso deverá ser limpa a tela ,
exibido o cabeçalho e continuar o processamento até o final do programa.

            Conversão metros – pés
       Metros                      Pés

*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int i = 0.0, conversao, tecla;

    for (i = 1; i <= 100; i++) {

        conversao = i / 0.3048;

        printf("\n\t\tConversão Metros -> Pés \n\tPés: %.1f \t\t\t\t\tMetros: %.4f", i, conversao);

        if (i == 20 || i == 40 || i == 60 || i == 80) {
            printf("\nAperte a tecla ENTER para continuar.");
            tecla = getche();
            system("cls");
        }
    }

    return 0;
}