#include <stdio.h>

int malhar(int idade, float peso);

int main() {

    // INFORMAÇÕES DO USUÁRIO
    char nomeUsuario[50];
    int idadeUsuario;
    float pesoAtual;
    float pesoDesejado;
    int vezezMalhar = 0;

    // NOME
    printf("Digite o seu nome: ");
    scanf("%s", nomeUsuario);

    // IDADE
    printf("Digite a sua idade: ");
    scanf("%d", &idadeUsuario);

    // PESO ATUAL
    printf("Digite seu peso atual: ");
    scanf("%f", &pesoAtual);

    // PESO DESEJADO
    printf("Digite seu peso desejado: ");
    scanf("%f", &pesoDesejado);

    while (pesoAtual > pesoDesejado) {

        pesoAtual = malhar(idadeUsuario, pesoAtual);

        vezezMalhar++;

    }

    printf("O %s deverá malhar %d vezez para chegar no peso no peso %f.\n", nomeUsuario, vezezMalhar, pesoDesejado);

}

int malhar(int idade, float peso) {

    if (idade < 28) {
        peso -= 2;
    } else {
        peso -= 1;
    }

    return peso;

}