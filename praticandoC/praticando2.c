#include <cs50.h>
#include <stdio.h>

int main(void) {
    
    // COMPRIMENTAR O USUÁRIO
    string nomeUsuario = get_string("Qual é o seu nome? \n");
    
    printf("Olá, %s. Seja bem vindo ao meu sistema \n", nomeUsuario);
    
    // PEDIR OS NÚMEROS DO USUÁRIO
    int nota = get_int("Digite a sua nota: \n");
    
    // VER SE ESTÁ APROVADO OU REPROVADO
    if (nota > 70) {
        
        printf("Parabens! Você está aprovado!\n");
        
    } else {
        
        printf("Você está reprovado. Estude mais!\n");
    }
    
}