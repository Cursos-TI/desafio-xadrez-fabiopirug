#include <stdio.h>

int main() {
    // ---- MOVIMENTAÇÃO DA TORRE ----
    printf("Movimento da Torre:\n");
    for (int casaTorre = 1; casaTorre <= 5; casaTorre++) {
        printf("Direita\n");
    }
    printf("\n");

    // ---- MOVIMENTAÇÃO DO BISPO (Nível Aventureiro: Loops Aninhados) ----
    printf("Movimento do Bispo:\n");
    // Loop externo para a direção vertical (Cima)
    for (int i = 1; i <= 5; i++) {
        // Loop interno para a direção horizontal (Direita)
        int j = 1;
        while (j <= i) {
            if (j == i) {
                printf("Cima, Direita\n");
            }
            j++;
        }
    }
    printf("\n");

    // ---- MOVIMENTAÇÃO DA RAINHA ----
    printf("Movimento da Rainha:\n");
    int casaRainha = 1;
    do {
        printf("Esquerda\n");
        casaRainha++;
    } while (casaRainha <= 8);
    printf("\n");

    // ---- MOVIMENTAÇÃO DO CAVALO (Nível Aventureiro: Obrigatório) ----
    printf("--- MOVIMENTAÇÃO DO CAVALO ---\n");
    // Loop externo (For) controla os movimentos verticais (2 casas para Baixo)
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
        
        // Loop aninhado interno (While) executa na última rodada para ir para a esquerda
        int j = 0;
        while (i == 1 && j < 1) { 
            printf("Esquerda\n");
            j++;
        }
    }

    return 0;
}
