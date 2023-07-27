// #include <stdio.h>

// int main(void) {

//     // char nome[50];
//     int numeros[3];

//     // PEDIR O NOME DO USUÁRIO
//     // printf("Digite seu nome: \n");
//     // scanf("%s", nome);

//     // PEDIR OS NÚMEROS DO USUÁRIO
//     printf("Digite 4 números: \n");
//     scanf("%d %d %d", &numeros[0], &numeros[1], &numeros[2]);

//     // MOSTRAR NÚMEROS EM ORDEM CRESCENTE
//     if (numeros[0] > numeros[1] && numeros[0] > numeros[2]) {

//         if (numeros[1] > numeros[2]) {
//             printf("%d %d %d", numeros[0], numeros[1], numeros[2]);
//         } else {
//             printf("%d %d %d", numeros[0], numeros[2], numeros[1]);
//         }

//     } else if (numeros[1] > numeros[0] && numeros[1] > numeros[2]) {

//         if (numeros[0] > numeros[2]) {
//             printf("%d %d %d", numeros[1], numeros[0], numeros[2]);
//         } else {
//             printf("%d %d %d", numeros[0], numeros[2], numeros[0]);
//         }

//     } else {

//         if (numeros[0] > numeros[1]) {
//             printf("%d %d %d", numeros[2], numeros[0], numeros[1]);
//         } else {
//             printf("%d %d %d", numeros[2], numeros[1], numeros[0]);
//         }

//     }

// }

#include <stdio.h>

#define TAM 10

int main() {
    int numeros[TAM], i, j, aux;

    // Solicita ao usuário que digite os números
    printf("Digite %d numeros:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%d", &numeros[i]);
    }

    // Ordena os números em ordem crescente usando o algoritmo de bubble sort
    for (i = 0; i < TAM - 1; i++) {
        for (j = 0; j < TAM - i - 1; j++) {
            if (numeros[j] > numeros[j+1]) {
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }

    // Imprime os números em ordem crescente
    printf("Numeros em ordem crescente:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
