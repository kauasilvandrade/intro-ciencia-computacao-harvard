#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    
    // PEDIR O NOME DO USUÁRIO
    int validacao;
    string nome_usuario;
    do {
        
        validacao = 0;
        
        nome_usuario = get_string("Digite seu nome: ");
        
        for (int i = 0, n = strlen(nome_usuario); i < n; i++) {
            
            if (!isalpha(nome_usuario[i])) {
                
                validacao = 1;
                
                break;
            }
            
        }
        
    } while (validacao);
    
    //COPIAR NOME DO USUÁRIO
    char *copiar_usuario = malloc(strlen(nome_usuario) + 1);
    
    for (int i = 0, n = strlen(nome_usuario); i < n; i++) {
        copiar_usuario[i] = nome_usuario[i];
    }
    
    // PEDIR O NÚMERO DO CARACTER QUE ELE QUER DEIXAR MAINÚSCULO
    int num_caracter;
    do {
        num_caracter = get_int("Digite o número do caracter que você quer que deixe mainúsculo: ");
    } while (num_caracter < 0);
    
    if (strlen(nome_usuario) > 0) {
        copiar_usuario[num_caracter] = toupper(copiar_usuario[num_caracter]);
    } 
    
    printf("Antes: %s\n", nome_usuario);
    printf("Depois: %s\n", copiar_usuario);
    
    free(copiar_usuario);
}
