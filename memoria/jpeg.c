#include <stdio.h>
#include <stdint.h>

// CRIAÇÃO DE UM BYTE
typedef uint8_t BYTE;

int main(int argc, char *argv[]) {
    
    // VERIFICAR USO
    if (argc != 2) {
        return 1;
    }
    
    // ABRIR ARQUIVO
    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        return 1;
    }
    
    // LER SE OS 3 PRIMEIROS BYTES
    BYTE bytes[3];
    fread(bytes, sizeof(BYTE), 3, file); //LER ARQUIVO
    
    // CHECAR SE TEM 3 BYTES
    if (bytes[0] == 0xff & bytes[1] == 0xd8 && bytes[2] == 0xff) {
        printf("Sim\n");
    } else {
        printf("No\n");
    }
    
}

