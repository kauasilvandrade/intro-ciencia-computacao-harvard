#include <stdio.h>

int main(void) {
    
    char s[23];
    
    printf("Digite algo (scanf tradicional):\n");
    scanf("%s", s);
    
    printf("Resultado: %s\n\n", s);
    
    printf("Digite algo (scanf convensional):\n");
    scanf("%22[^\n]s", s);
    
    printf("Resultado: %s\n\n", s);
}