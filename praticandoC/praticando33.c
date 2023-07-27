#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    
    int number1, number2, result;
    char *operation = malloc(50 * sizeof(char));
    
    printf("Calculadora\n");
    
    printf("Digite a operação: ");
    
    scanf("%i %s %i", &number1, operation, &number2);
        
    if (strcmp(operation, "+") == 0) {
        
        result = number1 + number2;
        
        printf("%i + %i = %i\n", number1, number2, result);
        
    } else if (strcmp(operation, "-") == 0) {
        
        result = number1 - number2;
        
        printf("%i - %i = %i\n", number1, number2, result);
        
    } else if (strcmp(operation, "x") == 0) {
        
        result = number1 * number2;
        
        printf("%i x %i = %i\n", number1, number2, result);
        
    } else if (strcmp(operation, ":") == 0) {
    
        if (number2 != 0) {
            
            result = number1 / number2;
            
            printf("%i : %i = %i\n", number1, number2, result);
            
        } else {
            
            printf("Erro: divisão por zero.\n");
            
        }
        
        
    }
        
    free(operation);
} 
