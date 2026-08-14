#include <stdio.h>


int main() {
    // Definindo a quantidade de casas a serem movidas por cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

  // 1. SIMULAÇÃO DO TORRE
    printf("--- Movimento da Torre ---\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n"); 

    // 2. SIMULAÇÃO DO BISPO
    printf("--- Movimento do Bispo ---\n");
    int i = 1; // Variável de controle do loop
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++; // Incrementa o contador a cada passo
    }
    printf("\n"); // Linha em branco para organizar a saída

    // 3. SIMULAÇÃO DA RAINHA
    printf("--- Movimento da Rainha ---\n");
    int i = 1;
    do {
        printf("Esquerda\n");
        i++; 
    } while (i <= casasRainha);
    printf("\n");

    return 0;
}