#include <stdio.h>

void main() {
    /*
        faça um programa que receba uma senha em uma variavel.
        apos isso, o programa deve pedir para que o usuario informe a sua senha e, se a senha n for
        a mesma, continua pedindo, se informar a a mesma senha da uma mensagem de "acesso correto"
    */

    int vsenha, vconf;

    printf("Cadastre sua senha aqui: ");
    scanf("%i", &vsenha);

    printf("Insira a senha de acesso: ");
    scanf("%i", &vconf);


    while (vconf != vsenha) {
        printf("Insira a senha novamente: ");
        scanf("%i", &vconf);
    }

    printf("Acesso Correto!");
}
