#include <stdio.h>
#include <cs50.h>

int main (void) {

    float num = get_float("Digite um número: \n");
    
    printf("Seu número: %.2f\n", num);

}