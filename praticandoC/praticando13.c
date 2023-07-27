#include <stdio.h>

int main() {

    float nota;

    printf("Digite a sua nota: \n");
    scanf("%f", &nota);

    if (nota >= 4.0 && nota < 7.0) {
        printf("Tem direito ao exame!!\n");
    }

}