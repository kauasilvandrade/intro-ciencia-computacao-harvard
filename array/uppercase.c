#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    
    string texto = get_string("Antes: ");
    
    printf("Depois: ");
    
    for (int i = 0, n = strlen(texto); i < n; i++) {
        
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            
            printf("%c", texto[i] - 32);
            
        } else {
            
            printf("%c", texto[i]);
            
        }
        
    }
    
    printf("\n");
    
}