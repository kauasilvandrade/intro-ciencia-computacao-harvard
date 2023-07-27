#include <stdio.h>
#include <cs50.h>

int main(void) {

    int vetor[5] = {10, 20, 30, 40, 50};

    float s = 0;
    for (int i = 0; i < 5; i++) {
        s += vetor[i];
    }

    printf("Resultado: %f", s / 5);
}