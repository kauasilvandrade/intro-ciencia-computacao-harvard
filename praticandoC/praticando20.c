#include <stdio.h>
#include <cs50.h>

const int total = 4;

int media(int tamanho, int array[]);

int main(void) {
    
    // SAUDAÇÕES AO USUÁRIO
    string nomeUsuario = get_string("Digite o seu nome: \n");
    printf("Seja bem vindo ao meu sistema %s:)\n", nomeUsuario);
    
    // PEDIR A PONTUAÇÃO DO USUÁRIO
    int pontuacao[total], i;
    
    for (i = 0; i < total; i++) {
        pontuacao[i] = get_int("Digite a sua pontuação: \n");
    }
    
    printf("A média do %s é %d", nomeUsuario, media(total, pontuacao));
    
}

int media(int tamanho, int array[]) {
    
    int soma = 0;
    
    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    
    return soma / tamanho;
    
}