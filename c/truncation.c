#include <cs50.h>
#include <stdio.h>

int main(void) {

    // Obter números de usuário
    int x = get_int("x: ");
    int y = get_int("y: ");

    // Dividir x por y
    float z = (float) x / (float) y;

    printf("%f\n", z);

}