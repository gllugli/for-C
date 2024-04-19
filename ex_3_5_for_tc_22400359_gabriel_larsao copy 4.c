/*
Sabendo que a fórmula de conversão de graus Fahreinheit para Celsius é C = ( 5 / 9 ) *
( f – 32 ), escreva um programa que converta de Fahreinheit para Celsius. O programa
deverá imprimir na tela os 50 (cinquenta) primeiros valores positivos e negativos
devendo exibir as duas unidades de conversão
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    float conversao, i = 0.0;

    for (i = 50; i >= -50; i--) {
        
        conversao = (5.0 / 9.0) * (i - 32.0);
        
        printf("\nFahreinheit: %.1f \t\tCelcius: %.1f", i, conversao);
        
    }

    return 0;
}