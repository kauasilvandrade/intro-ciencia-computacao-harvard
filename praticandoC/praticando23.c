#include <stdio.h>
#include <cs50.h>

typedef struct {
    
    string nome_banda;
    string tipo_banda;
    int num_integrantes;
    int pontuacao_banda;
    
} banda;

int main(void) {
    
    banda banda[3];
    
    for (int i = 0; i < 3; i++) {
        
        printf("Banda %i\n", i + 1);
    
        banda[i].nome_banda = get_string("Digite o nome da banda: \n");
        banda[i].pontuacao_banda = get_int("Digite a pontuação da banda: \n");
        
    }
    
    if (banda[0].pontuacao_banda > banda[1].pontuacao_banda && banda[0].pontuacao_banda > banda[2].pontuacao_banda) {
        
        if (banda[1].pontuacao_banda > banda[2].pontuacao_banda) {
            
            printf("Banda Vencedora!!\n");
            printf("%s", banda[0].nome_banda);
            printf("\n");
            printf("1° Lugar: %s com %i pontos\n2° Lugar: %s com %i pontos\n3° Lugar: %s com %i pontos\n", banda[0].nome_banda, banda[0].pontuacao_banda, banda[1].nome_banda, banda[1].pontuacao_banda, banda[2].nome_banda, banda[2].pontuacao_banda);
            
            
        } else {
            
            printf("Banda Vencedora!!\n");
            printf("%s", banda[0].nome_banda);
            printf("\n");
            printf("1° Lugar: %s com %i pontos\n2° Lugar: %s com %i pontos\n3° Lugar: %s com %i pontos\n", banda[0].nome_banda, banda[0].pontuacao_banda, banda[2].nome_banda, banda[2].pontuacao_banda, banda[1].nome_banda, banda[1].pontuacao_banda);
            
            printf("%i %i %i\n", banda[0].pontuacao_banda, banda[2].pontuacao_banda, banda[1].pontuacao_banda);
            
        }
        
        
    } else if (banda[1].pontuacao_banda > banda[0].pontuacao_banda && banda[1].pontuacao_banda > banda[2].pontuacao_banda) {
        
        if (banda[2].pontuacao_banda > banda[0].pontuacao_banda) {
            
            printf("Banda Vencedora!!\n");
            printf("%s", banda[0].nome_banda);
            printf("\n");
            printf("1° Lugar: %s com %i pontos\n2° Lugar: %s com %i pontos\n3° Lugar: %s com %i pontos\n", banda[1].nome_banda, banda[1].pontuacao_banda, banda[2].nome_banda, banda[2].pontuacao_banda, banda[0].nome_banda, banda[0].pontuacao_banda);
            
            
        } else {
            
            printf("Banda Vencedora!!\n");
            printf("%s", banda[0].nome_banda);
            printf("\n");
            printf("1° Lugar: %s com %i pontos\n2° Lugar: %s com %i pontos\n3° Lugar: %s com %i pontos\n", banda[1].nome_banda, banda[1].pontuacao_banda, banda[0].nome_banda, banda[0].pontuacao_banda, banda[2].nome_banda, banda[2].pontuacao_banda);
            
            printf("%i %i %i\n", banda[1].pontuacao_banda, banda[0].pontuacao_banda, banda[2].pontuacao_banda);
            
        }
        
        
    } else {
        
        if (banda[1].pontuacao_banda > banda[0].pontuacao_banda) {
            
            printf("Banda Vencedora!!\n");
            printf("%s", banda[0].nome_banda);
            printf("\n");
            printf("1° Lugar: %s com %i pontos\n2° Lugar: %s com %i pontos\n3° Lugar: %s com %i pontos\n", banda[2].nome_banda, banda[2].pontuacao_banda, banda[1].nome_banda, banda[1].pontuacao_banda, banda[0].nome_banda, banda[0].pontuacao_banda);
            
            printf("%i %i %i\n", banda[2].pontuacao_banda, banda[1].pontuacao_banda, banda[0].pontuacao_banda);
            
        } else {
            
            printf("Banda Vencedora!!\n");
            printf("%s", banda[0].nome_banda);
            printf("\n");
            printf("1° Lugar: %s com %i pontos\n2° Lugar: %s com %i pontos\n3° Lugar: %s com %i pontos\n", banda[2].nome_banda, banda[2].pontuacao_banda, banda[0].nome_banda, banda[0].pontuacao_banda, banda[1].nome_banda, banda[1].pontuacao_banda);
            
            printf("%i %i %i\n", banda[2].pontuacao_banda, banda[0].pontuacao_banda, banda[1].pontuacao_banda);
            
        }
        
    }

    
}
