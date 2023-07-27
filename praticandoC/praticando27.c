#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    
    char *s = get_string("S: ");
    
    if (s == NULL) {
        return 1;
    }
    
    char *t = malloc(strlen(s) + 1);
    
    for (int i = 0, n = strlen(s); i < n; i++) {
        
        t[i] = s[i];
        
    }
    
    if (strlen(s) > 0) {
        
        t[0] = toupper(t[0]);
    
    }
    
    printf("S: %s\n", s);
    printf("T: %s\n", t);
    
    free(t);
    
}