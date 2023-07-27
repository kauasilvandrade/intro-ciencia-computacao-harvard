#include <stdio.h>
#include <cs50.h>

void funcao_concorda();

int main(void) {
    
    funcao_concorda();

}

void funcao_concorda() {
    
    char c = get_char("Você concorda? ");
    
    if (c == 'y' || c == 'Y') {
    
        printf("Você concorda");
        
    } else if (c == 'n' || c == 'N') {
        
        printf("Você não concorda\n");
        
    } else {
        printf("Resposta Errada\n");
        printf("Digite Novamente\n");
        funcao_concorda();
    }
    
    
}