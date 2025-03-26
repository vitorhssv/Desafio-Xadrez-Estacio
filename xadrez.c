#include <stdio.h>

// cada função de peça usa o argumento movimentos para mover a peça n vezes
void movimentos_torre(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        printf("Direita\n");
    }
}

void movimentos_bispo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        printf("Cima direita\n");
    }
}

void movimentos_rainha(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        printf("Esquerda\n");
    }
}

void movimentos_cavalo() {
    // Imprime "Cima" duas vezes usando um loop for, depois imprime "Direita"
    int i = 0;
    while (i < 1){
        for (int j = 0; j < 2; j++) {
            printf("Cima\n");
        }
        printf("Direita\n");
        i++;
    }
}

int main() {

    printf("TORRE:\n");
    movimentos_torre(5);

    printf("\nBISPO:\n");
    movimentos_bispo(6);

    printf("\nRAINHA:\n");
    movimentos_rainha(8);

    printf("\nCAVALO:\n");
    movimentos_cavalo();

    return 0;
}