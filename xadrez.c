#include <stdio.h>

/**
 * Desafio de Xadrez - Nível Avançado
 */

// Protótipos das funções recursivas
void moverTorre(int casas);
void moverBispo(int casas);
void moverRainha(int casas);

int main() {
    // Definindo a quantidade de casas a serem movidas por cada peça.
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // =========================================================================
    // 1. SIMULAÇÃO DA TORRE (RECURSIVIDADE)
    // Regra: Mover 5 casas para a Direita usando função recursiva.
    // =========================================================================
    printf("--- Movimento da Torre ---\n");
    moverTorre(casasTorre);
    printf("\n");

    // =========================================================================
    // 2. SIMULAÇÃO DO BISPO (RECURSIVIDADE + LOOPS ANINHADOS)
    // Regra: Mover 5 casas na diagonal (Cima e Direita).
    // Implementa recursividade combinada com loops aninhados:
    // =========================================================================
    printf("--- Movimento do Bispo ---\n");
    moverBispo(casasBispo);
    printf("\n"); 

    // =========================================================================
    // 3. SIMULAÇÃO DA RAINHA (RECURSIVIDADE)
    // Regra: Mover 8 casas para a Esquerda usando função recursiva.
    // =========================================================================
    printf("--- Movimento da Rainha ---\n");
    moverRainha(casasRainha);
    printf("\n"); 

    // =========================================================================
    // 4. SIMULAÇÃO DO CAVALO (LOOPS COMPLEXOS E ANINHADOS)
    // Regra: Mover em "L" (2 casas para Cima e 1 casa para a Direita).
    // Utiliza loops aninhados com múltiplas variáveis, continue e break.
    // =========================================================================
    printf("--- Movimento do Cavalo ---\n");

    // Loop externo com múltiplas variáveis declaradas no cabeçalho
    for (int i = 1, movimentoL = 1; i <= movimentoL; i++) {
        
        // Loop interno com múltiplas variáveis para os passos em "L"
        for (int step = 1, limiteSubida = 2, limiteDireita = 1; step <= (limiteSubida + limiteDireita); step++) {
            
            // Primeiros 2 passos: movimentação vertical (Cima)
            if (step <= limiteSubida) {
                printf("Cima\n");
                continue; 
            }
            
            // Passo final: movimentação horizontal (Direita)
            if (step == limiteSubida + limiteDireita) {
                printf("Direita\n");
                break; 
            }
        }
    }
    printf("\n"); // Linha em branco para organizar a saída

    return 0;
}

// =============================================================================
// IMPLEMENTAÇÃO DAS FUNÇÕES RECURSIVAS
// =============================================================================

/**
 * Função recursiva para mover a Torre.
 * @param casas Quantidade de casas restantes para mover a Torre à direita.
 */
void moverTorre(int casas) {
    // Caso base: se não houver mais casas para mover, encerra a recursão
    if (casas <= 0) {
        return;
    }
    
    // Imprime a direção do movimento
    printf("Direita\n");
    
    // Chamada recursiva com decremento do número de casas
    moverTorre(casas - 1);
}

/**
 * Função recursiva para mover o Bispo combinada com loops aninhados.
 * @param casas Quantidade de passos diagonais restantes para mover o Bispo.
 */
void moverBispo(int casas) {
    // Caso base: encerra quando todas as casas diagonais forem percorridas
    if (casas <= 0) {
        return;
    }

    // Loops aninhados para simular 1 casa diagonal (1 vertical + 1 horizontal):
    // Loop externo: movimento vertical (Cima)
    for (int v = 1; v <= 1; v++) {
        printf("Cima\n");
        
        // Loop interno: movimento horizontal (Direita)
        for (int h = 1; h <= 1; h++) {
            printf("Direita\n");
        }
    }

    // Chamada recursiva para a próxima casa diagonal
    moverBispo(casas - 1);
}

/**
 * Função recursiva para mover a Rainha.
 * @param casas Quantidade de casas restantes para mover a Rainha à esquerda.
 */
void moverRainha(int casas) {
    // Caso base: encerra a recursão quando a contagem chega a 0
    if (casas <= 0) {
        return;
    }

    // Imprime a direção do movimento
    printf("Esquerda\n");

    // Chamada recursiva com decremento do número de casas
    moverRainha(casas - 1);
}