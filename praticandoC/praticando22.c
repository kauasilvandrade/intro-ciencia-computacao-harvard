#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct {
    
    string nome;
    int idade;
    string numero;
}
pessoa;

int main(void) {
    
    pessoa dadosPessoais[3];
    
    // NOME DO USUÁRIO
    int caracteres = 0;
    do {
        
        dadosPessoais[0].nome = get_string("Digite o seu nome: (obs: Com mais de 3 caracteres!)\n");
    
        for (int i = 0, n = strlen(dadosPessoais[0].nome); i < n; i++) {
            
            if ( (dadosPessoais[0].nome[i] >= 'a' && dadosPessoais[0].nome[i] <= 'z') || (dadosPessoais[0].nome[i] >= 'A' && dadosPessoais[0].nome[i] <= 'Z') ) {
                caracteres++;
            }
            
        }
        
    } while(caracteres <= 3);
    
    // IDADE DO USUÁRIO
    do {
        dadosPessoais[1].idade = get_int("Digite o sua idade: (ex: 10)\n");
    } while (dadosPessoais[1].idade >= 150);
    
    // NÚMERO DE TELEFONE DO USUÁRIO
    dadosPessoais[2].numero = get_string("Digite o seu número de telefone: (ex: 11-96852-2418)\n");
    
    // MOSTRAR DADOS
    printf("Dados: \n");
    
    printf("Nome: %s\n", dadosPessoais[0].nome);
    printf("Idade: %i\n", dadosPessoais[1].idade);
    printf("Número de Telefone: %s\n", dadosPessoais[2].numero);
    
}