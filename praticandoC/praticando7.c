#include <stdio.h>

int main(void) {

    int idade = 0;
    float peso = 0.0;

    printf("Digite um idade: \n");
    scanf("%i", &idade);

    printf("Digite um peso: \n");
    scanf("%f", &peso);

    printf("Idade informada: %i\n", idade);

    printf("Peso informado: %.2f\n", peso);

}

