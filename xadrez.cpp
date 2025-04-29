#include <stdio.h>

int main() {
    // Movimento da TORRE: 5 casas para a direita, usando estrutura FOR
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Espaço entre os movimentos

    // Movimento do BISPO: 5 casas na diagonal para cima e à direita, usando WHILE
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n"); // Espaço entre os movimentos

    // Movimento da RAINHA: 8 casas para a esquerda, usando DO-WHILE
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}
