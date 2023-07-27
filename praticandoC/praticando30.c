// #include <stdio.h>
// #include <cs50.h>
// #include <string.h>
// #include <stdlib.h>

// const int TAMANHO = 2;

// void pegar_nome_numeros(char *nomes, char *numeros);

// int main(void) {

//     // VARIÁVEIS
//     char *nome = malloc(sizeof(char) * 50);
//     char *numero = malloc(sizeof(char) * 15);
//     FILE *file = fopen("nomes_numeros.csv", "a");

//     // PEGAR OS NOMES E OS NÚMEROS DO USUÁRIO
//     for (int i = 0; i < TAMANHO; i++) {
    
//         printf("Usuário %i\n", i + 1);
        
//         nome = get_string("Digite o seu nome: \n");
        
//         numero = get_string("Digite o seu número: \n");
    
//         fprintf(file, "Usuário %d\n%s: %s\n\n", i + 1, nome, numero);
        
//     }
    
//     fclose(file);
    
// }

#include <stdio.h>
#include <cs50.h>

int main(void) {
    
    int vetor[3] = {10,20,30};
    
    for (int i = 0; i < 3; i++) {
        printf("%i\n", vetor[i]);
    }
    
    printf("\n");
    
    vetor[4] = 10,20,30,40;
    
    for (int i = 0; i < 4; i++) {
        printf("%i\n", vetor[i]);
    }
    
}