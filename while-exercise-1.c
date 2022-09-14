#include <stdio.h>

void main() {
    /* Faça um programa que recebe valores inteiros enquanto a
    soma desses numeros for menor que 50, no final mostre a soma */

    int vnumero, vsoma;

    vsoma = 0;

    while (vsoma < 50){
        printf("Digite o numero que quiser: ");
        scanf("%i", &vnumero);
        vsoma = vsoma + vnumero;
    }
    printf("O resultado da soma e: %i", vsoma);
}
