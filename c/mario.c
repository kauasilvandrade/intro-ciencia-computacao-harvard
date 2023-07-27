#include <stdio.h>
#include <cs50.h>

int main(void) {

    int h = get_int("Heigth: ");
    int w = get_int("Width: ");

    for (int i = 0; i < h; i++) {
        
        for (int t = 0; t < w; t++) {
            printf("#");
        }
        
        printf("\n");
    }

}