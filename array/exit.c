#include <stdio.h>
#include <cs50.h>

int main (int argc, string argv[]) {
    
    if (argc != 2) {
        
        printf("Falta argumentos de linha de comando!\n");
        return 1;
        
    }
    
    printf("Olá, %s\n", argv[1]);
    return 0;
}