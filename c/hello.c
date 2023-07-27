#include <stdio.h>
#include <cs50.h>

int main(void) {
    
    // SAUDAÇÃO AO USUÁRIO 
    string nomeUsuario = get_string("Digite o seu nome: \n");
    
    // PEDIR O ANO DE NASCIMENTO DO USUÁRIO
    int anoUsuario = get_int("Digite o seu ano de nascimento: \n");
    
    //SUBTRAÇÃO DE ANOS
    int idade = 2023 - anoUsuario;
    
    // MOSTRAR A IDADE 
    printf("O %s tem ou terá %i anos! \n", nomeUsuario, idade);
}