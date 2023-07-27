#include <stdio.h>

int main() {

    double premio = 780000.00;

    double jogador1 = 0.46 * premio;
    double jogador2 = 0.32 * premio;
    double jogador3 = premio - jogador1 - jogador2;

    printf("Ganhador1: %.2f\n", jogador1);
    printf("Ganhador2: %.2f\n", jogador2);
    printf("Ganhador3: %.2f\n", jogador3);

}
