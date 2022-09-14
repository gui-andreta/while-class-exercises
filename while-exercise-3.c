#include <stdio.h>

void main() {
    /*
        fa�a um programa que ofera�a o menu abaixo:
        codigo  nome    valor
        1       coxinha 6,00
        2       esfiha  7,00
        3       cac.-qu 9,00
        4       x-bacon 16,00
        5       coca    5,00
        0       sair

        ate que o usuario informe o codigo 0 (sair)
        no final de o total;
    */

    int vcodigo, vcox, vesf, vcq, vxb, vcc, vs, vqtd, vtotal, vsoma;

    vcox = 6;
    vesf = 7;
    vcq = 9;
    vxb = 16;
    vcc = 5;
    vs = 0;
    vtotal = 0;
    vsoma = 0;
    vqtd = 0;

    printf("Esse e o nosso menu: \n 1       coxinha         6,00 \n 2       esfirra              7,00 \n 3       cachorro-quente     9,00 \n 4       x-bacon         16,00 \n 5       coca-cola      5,00 \n 0       sair\n\n");


    while (vcodigo != vs)
    {
        printf("Digite o codigo do item desejado: ");
        scanf("%i", &vcodigo);

        // logica para decisão do codigo

        // coxinha
        if (vcodigo == 1)
        {
            printf("Digite a quantidade desejada: ");
            scanf("%i", &vqtd);
            vtotal = vcox * vqtd;
        }

        // esfirra
        if (vcodigo == 2)
        {
            printf("Digite a quantidade desejada: ");
            scanf("%i", &vqtd);
            vtotal = vesf * vqtd;
        }

        // cachorro quente
        if (vcodigo == 3)
        {
            printf("Digite a quantidade desejada: ");
            scanf("%i", &vqtd);
            vtotal = vcq * vqtd;
        }

        // x-bacon
        if (vcodigo == 4)
        {
            printf("Digite a quantidade desejada: ");
            scanf("%i", &vqtd);
            vtotal = vxb * vqtd;
        }

        // coca-cola
        if (vcodigo == 5)
        {
            printf("Digite a quantidade desejada: ");
            scanf("%i", &vqtd);
            vtotal = vcc * vqtd;
        }

        vsoma = vsoma + vtotal;
    }

    printf("O valor total de sua compra e: %i", vsoma);

}
