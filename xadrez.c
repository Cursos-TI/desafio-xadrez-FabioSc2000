#include <stdio.h>

int main() {
    // Definindo a quantidade de casas a serem movidas por cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasCavaloCima = 2;   
    int casasCavaloDireita = 1; 

    // 1. SIMULAÇÃO DA TORRE
    printf("--- Movimento da Torre ---\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n"); 

    // 2. SIMULAÇÃO DO BISPO
    printf("--- Movimento do Bispo ---\n");
    int i_bispo = 1; // Nome de variável específico para evitar conflitos de escopo
    while (i_bispo <= casasBispo) {
        printf("Cima, Direita\n");
        i_bispo++; 
    }
    printf("\n"); 

    // 3. SIMULAÇÃO DA RAINHA
    printf("--- Movimento da Rainha ---\n");
    int i_rainha = 1; 
    do {
        printf("Esquerda\n");
        i_rainha++; 
    } while (i_rainha <= casasRainha);
    printf("\n");

    // 4. SIMULAÇÃO DO CAVALO (Movimento em L: 2 Cima, 1 Direita)
    printf("--- Movimento do Cavalo ---\n");
    for (int i = 1; i <= casasCavaloCima; i++) {
        printf("Cima\n");
    }
    for (int j = 1; j <= casasCavaloDireita; j++) {
        printf("Direita\n");
    }
    printf("\n"); 

    return 0;
}