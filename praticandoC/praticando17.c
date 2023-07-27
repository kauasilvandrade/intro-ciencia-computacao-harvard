#include <stdio.h>

int main() {

    int vetor[5];

    for (int i = 0; i < 5; i++) {

        printf("Insira um dado: \n");
        scanf("%d", &vetor[i]);

    }

    printf("Dados inseridos: \n");

    for (int i = 0; i < 5; i++) {

        printf("%d ", vetor[i]);

    }

}