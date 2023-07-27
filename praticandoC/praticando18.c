#include <stdio.h>

float calcular_notas(float notas[5]);

int main() {

    int i;
    float notasAluno[5];

    // PEDIR AS NOTAS DO ALUNO
    for (i = 0; i < 5; i++) {
        printf("Digite a sua nota: \n");
        scanf("%f", &notasAluno[i]);
    }

    float media = calcular_notas(notasAluno);

    printf("Media: %.2f\n", media);

}

float calcular_notas(float notas[5]) {

    float calcular = notas[0] + notas[1] + notas[2] + notas[3] + notas[4];

    return calcular / 5;

}
