#include <stdio.h>

// --- FUNÇÕES RECURSIVAS (Exigência do Nível Mestre) ---

// Função recursiva para mover a Torre (5 casas para a Direita)
void moverTorre(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Direita\n");
    moverTorre(casas - 1);  // Chamada recursiva
}

// Função recursiva para mover a Rainha (8 casas para a Esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Função recursiva para mover o Bispo (5 casas na Diagonal Direita para Cima)
// O enunciado diz que o Bispo exige loops aninhados combinados com recursividade
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return; // Condição de parada
    
    // Loops aninhados simulando as componentes da diagonal (Cima e Direita)
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, ");
            printf("Direita\n");
        }
    }
    moverBispoRecursivo(casas - 1); // Chamada recursiva
}

int main() {
    // --- MOVIMENTAÇÃO DA TORRE ---
    printf("--- MOVIMENTAÇÃO DA TORRE ---\n");
    moverTorre(5);
    printf("\n");

    // --- MOVIMENTAÇÃO DA RAINHA ---
    printf("--- MOVIMENTAÇÃO DA RAINHA ---\n");
    moverRainha(8);
    printf("\n");

    // --- MOVIMENTAÇÃO DO BISPO ---
    printf("--- MOVIMENTAÇÃO DO BISPO ---\n");
    moverBispoRecursivo(5);
    printf("\n");

    // --- MOVIMENTAÇÃO DO CAVALO (Loops Aninhados Complexos) ---
    printf("--- MOVIMENTAÇÃO DO CAVALO ---\n");
    
    // Loop externo e interno com condições múltiplas e break/continue
    // Objetivo: 2 casas para Cima e 1 para a Direita
    for (int i = 0, passosVerticais = 2; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            // Movimento Vertical (Cima)
            if (i < passosVerticais) {
                if (j > 0) continue; // Ignora o resto do loop interno nesta rodada
                printf("Cima\n");
                break; // Sai do loop interno para computar o próximo passo vertical
            }
            // Movimento Horizontal (Direita) - Executado após os passos verticais
            else if (i == passosVerticais && j == 1) {
                printf("Direita\n");
            }
        }
    }
    printf("\n");

    return 0;
}
