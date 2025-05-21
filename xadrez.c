#include <stdio.h>

int main() {
    // ---------- TORRE ----------
    // A Torre move-se 5 casas para a direita
    int movimentosTorre = 5;
    printf("Movimento da Torre:\n");

    // Estrutura de repetição: FOR
    for (int i = 1; i <= movimentosTorre; i++) {
        printf("Direita\n");
    }

    // ---------- BISPO ----------
    // O Bispo move-se 5 casas na diagonal: Cima e Direita
    int movimentosBispo = 5;
    int contadorBispo = 1;
    printf("\nMovimento do Bispo:\n");

    // Estrutura de repetição: WHILE
    while (contadorBispo <= movimentosBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // ---------- RAINHA ----------
    // A Rainha move-se 8 casas para a esquerda
    int movimentosRainha = 8;
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");

    // Estrutura de repetição: DO-WHILE
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= movimentosRainha);

    return 0;
}
