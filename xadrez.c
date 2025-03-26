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

    printf("\nCAVALO:\n");
    // Imprime "Baixo" duas vezes, quando
    int movimentos_cavalo = 0;
    while (movimentos_cavalo < 1){
        for (int i = 0; i < 2; i++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        movimentos_cavalo++;
    }

    return 0;
}