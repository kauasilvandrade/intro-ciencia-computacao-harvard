#include <stdio.h>

int main(void) {

    int valor;

    printf("Insira um valor de 1 a 7: \n");
    scanf("%d", &valor);

    switch(valor) {

        case 1:
            printf("Seu valor é o número 1\n");
            break;

        case 2:
            printf("Seu valor é o número 2\n");
            break;

        case 3:
            printf("Seu valor é o número 3\n");
            break;

        case 4:
            printf("Seu valor é o número 4\n");
            break;

        case 5:
            printf("Seu valor é o número 5\n");
            break;

        case 6:
            printf("Seu valor é o número 6\n");
            break;

        case 7:
            printf("Seu valor é o número 7\n");
            break;

         default:
            printf("Valor invalido\n");
            break;
    }

}