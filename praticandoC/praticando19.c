#include <stdio.h>

int calcular_notas_aluno();

int main() {

    int i, media;
    int notasAluno[3];

    // PEDIR AS NOTAS DO ALUNO
    for (i = 0; i < 3; i++) {
        printf("Digite uma nota: \n");
        scanf("%d", &notasAluno[i]);
    }

    // MOSTRAR AS MEDIAS
    media = calcular_notas_aluno(3, notasAluno);
    printf("Media: %d\n", media);

}

int calcular_notas_aluno(int tamanho, int notas[]) {

    int calculo = 0;
    
    for (int i = 0; i < tamanho; i++) {
        calculo += notas[i];
    }

    return calculo / tamanho;
}