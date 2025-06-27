#include <stdio.h>

int main() {
    //Declaração e inicialização da matriz, vetores e variáveis:
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    int navio1[3] = {3, 3, 3}, navio2[3] = {3, 3, 3};

    //Exibição do tabuleiro anterior ao posicionamento dos navios:
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d\t", tabuleiro[i][j]);
        }
        printf("\n");
    }

    //Inserção dos navios e exibição do tabuleiro atualizado:
    tabuleiro [4][2] = navio1[0];
    tabuleiro [4][3] = navio1[1];
    tabuleiro [4][4] = navio1[2];
    tabuleiro [7][6] = navio2[0];
    tabuleiro [8][6] = navio2[1];
    tabuleiro [9][6] = navio2[2];
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d\t", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
