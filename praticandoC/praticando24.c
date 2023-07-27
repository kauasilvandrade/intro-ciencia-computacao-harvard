#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    
    string nomes = get_string("Digite um nome: \n");
    
    if (strcmp(nomes, "Kauã") == 0) {
        printf("Kauã\n");
    } else if (strcmp(nomes, "Kaique") == 0) {
        printf("Kaique\n");
    } else if (strcmp(nomes, "João") == 0) {
        printf("João\n");
    }
    
    
}