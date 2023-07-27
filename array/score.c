#include <stdio.h>
#include <cs50.h>

float media(int length, int array[]);

const int TOTAL = 3;

int main(void) {
    int scores[TOTAL];
        
    for (int i = 0; i < TOTAL; i++) {
        scores[i] = get_int("Score: \n");
    }    
    
    printf("Média: %f\n", media(TOTAL, scores));
}

float media(int length, int array[]) {
    int sum = 0;
    
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    
    return sum / (float) length;
}