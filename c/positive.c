#include <stdio.h>
#include <cs50.h>

int pegar_numero_inteiro(void);

int main(void) {
    
    pegar_numero_inteiro();
    
}

int pegar_numero_inteiro(void) {
    
    int numero;
    
    do {
        
        numero = get_int("Digite um número inteiro: \n");
        
    }
    
    while (numero < 1);
    
    return numero;
    
}