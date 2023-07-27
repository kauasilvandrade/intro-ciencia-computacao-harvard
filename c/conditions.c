#include <cs50.h>
#include <stdio.h>

int main(void) {

    // SOLICITAR O USUÁRIO O X
    int x = get_int("x: ");

    // SOLICITAR O USUÁRIO O Y
    int y = get_int("y: ");

    // COMPARAÇÃO DE X E Y
    if (x < y) {

        printf("X é menor que Y");

    } else if (x > y) {

        printf("X é maior que Y");

    } else {

        printf("X é igual á Y");

    }

}