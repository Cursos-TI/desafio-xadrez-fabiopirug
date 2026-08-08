#include <stdio.h>

int main() {
    // ---- MOVIMENTAÇÃO DA TORRE ----
    // A torre deve se mover 5 casas para a direita.
    // Para isso, utilizamos a estrutura de repetição 'for' com uma variável inteira descritiva.
    printf("Movimento da Torre:\n");
    for (int casaTorre = 1; casaTorre <= 5; casaTorre++) {
        printf("Direita\n"); // Imprime a direção a cada casa percorrida
    }
    printf("\n"); // Quebra de linha para organizar o console

    // ---- MOVIMENTAÇÃO DO BISPO ----
    // O bispo deve se mover 5 casas na diagonal para cima e à direita.
    // Para esta peça, utilizamos a estrutura de repetição 'while' e variável inteira.
    printf("Movimento do Bispo:\n");
    int casaBispo = 1; // Inicializa o contador de casas do bispo
    while (casaBispo <= 5) {
        printf("Cima, Direita\n"); // Imprime a combinação de direções da diagonal
        casaBispo++; // Incrementa o contador para evitar loop infinito
    }
    printf("\n");

    // ---- MOVIMENTAÇÃO DA RAINHA ----
    // A rainha deve se mover 8 casas para a esquerda.
    // Para cumprir o desafio, utilizamos a estrutura de repetição 'do-while' com variável inteira.
    printf("Movimento da Rainha:\n");
    int casaRainha = 1; // Inicializa o contador de casas da rainha
    do {
        printf("Esquerda\n"); // Imprime a direção a cada passo
        casaRainha++; // Incrementa o contador de casas
    } while (casaRainha <= 8); // Condição testada após a execução do bloco

    return 0;
}
