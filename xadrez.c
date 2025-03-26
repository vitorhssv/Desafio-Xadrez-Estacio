#include <stdio.h>

int main() {
    int movimentos_torre = 5;
    int movimentos_bispo = 6;
    int movimentos_rainha = 8;
    // imprime o movimento n vezes pra cada peça

    printf("TORRE:\n");
    for (int i = 0; i < movimentos_torre; i++) {
        printf("Direita\n");
    }

    printf("\nBISPO:\n");
    for (int i = 0; i < movimentos_bispo; i++) {
        printf("Cima direita\n");
    }

    printf("\nRAINHA:\n");
    for (int i = 0; i < movimentos_rainha; i++) {
        printf("Esquerda\n");
    }
    return 0;
}