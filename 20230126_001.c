#include <stdio.h>
void somaMatrizes(int matrizA[3][5], int matrizB[3][5], int matrizS[3][5]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            matrizS[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

int main() {
    int matrizA[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    int matrizB[3][5] = {{5, 4, 3, 2, 1}, {10, 9, 8, 7, 6}, {15, 14, 13, 12, 11}};
    int matrizS[3][5];

    somaMatrizes(matrizA, matrizB, matrizS);

    printf("Matriz resultado: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matrizS[i][j]);
        }
        printf("\n");
    }

    return 0;
}
