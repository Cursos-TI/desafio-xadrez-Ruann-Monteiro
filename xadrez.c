#include <stdio.h>

// Definindo as constantes para o número de movimentos das peças
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_RAINHA 8
#define MOVIMENTOS_CAVALO 8

int main() {
    // Movimentação do Bispo - 5 casas na diagonal superior direita
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= MOVIMENTOS_BISPO; i++) {
        // O bispo se move para "Cima" e "Direita" a cada iteração
        printf("Cima\n");
        printf("Direita\n");
    }

    // Movimentação da Torre - 5 casas para a direita
    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= MOVIMENTOS_TORRE; i++) {
        // A torre se move apenas para "Direita"
        printf("Direita\n");
    }

    // Movimentação da Rainha - 8 casas para a esquerda
    printf("Movimentação da Rainha:\n");
    for (int i = 1; i <= MOVIMENTOS_RAINHA; i++) {
        // A rainha se move apenas para "Esquerda"
        printf("Esquerda\n");
    }

    // Movimentação do Cavalo - 8 direções possíveis (2 casas em uma direção e 1 em outra)
    printf("Movimentação do Cavalo:\n");
    printf("Cima\n");
    printf("Cima\n");
    printf("Direita\n");

    printf("Cima\n");
    printf("Cima\n");
    printf("Esquerda\n");

    printf("Baixo\n");
    printf("Baixo\n");
    printf("Direita\n");

    printf("Baixo\n");
    printf("Baixo\n");
    printf("Esquerda\n");

    return 0;
}

