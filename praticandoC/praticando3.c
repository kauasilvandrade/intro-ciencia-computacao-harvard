#include <stdio.h>
#include <cs50.h>

int main(void) {

    // SAUDAÇÕES AO USUÁRIO
    printf("Bem vindo ao meu sistema.\n");

    // PEDIR O NOME E SÉRIE DO ALUNO
    printf("Digite o nome completo e a série do aluno(a): \n");
    
    string nomeAluno = get_string("Nome: ");
    string serieAluno = get_string("Série: ");
    
    printf("Digite as notas do aluno(a) %s\n", nomeAluno);

    // NOTAS DO ALUNO
    float primeiroBimestre = get_float("Primeiro bimestre: \n");
    float segundoBimestre = get_float("Segundo bimestre: \n");
    float terceiroBimestre = get_float("Terceiro bimestre: \n");
    float quartoBimestre = get_float("Quarto bimestre: \n");

    // SOMAR A NOTA DO ALUNO
    float somarNotas = primeiroBimestre + segundoBimestre + terceiroBimestre + quartoBimestre;

    float mediaAluno = somarNotas / 4;

    // MÉDIA
    printf("A média do aluno(a) %s do %s é %.1f\n", nomeAluno, serieAluno, mediaAluno);

    // VER SE O USUÁRIO ESTÁ APROVADO OU NÃO
    if (mediaAluno >= 6) {

        printf("Aprovado");

    } else if (mediaAluno < 6) {

        printf("Reprovado");

    }

}