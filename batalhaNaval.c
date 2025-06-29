#include <stdio.h>

int main() {
    //Declaração e inicialização da matriz:
    int tabuleiro[10][10] = {0};

    //Exibição do tabuleiro anterior ao posicionamento dos navios:
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d\t", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //Inserção dos navios:
    //Navio horizontal:
    for (int i = 0; i < 10; i++){
        for (int j = 0; j< 10; j++){
            if (i == 3 && j >= 3 && j <= 5){
                tabuleiro[i][j] = 3;
            }
        }
    }

    //Navio vertical:
    for (int i = 0; i < 10; i++){
        for (int j = 0; j< 10; j++){
            if (j == 6 && i >= 7 && i <= 9){
                tabuleiro[i][j] = 3;
            }
        }
    }

    //Navio diagonal 1:
    for (int i = 0; i < 10; i++){
        for (int j = 0; j< 10; j++){
            if (i == j && j < 3 && i < 3){
                tabuleiro[i][j] = 3;
            }
        }
    }

    //Navio diagonal 2:
    for (int i = 0; i < 10; i++){
        for (int j = 0; j< 10; j++){
            if (i + j == 9 && i < 3 && j <= 9 && j >= 7){
                tabuleiro[i][j] = 3;
            }
        }
    }

    //Exibição do tabuleiro após o posicionamento dos navios:
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d\t", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
