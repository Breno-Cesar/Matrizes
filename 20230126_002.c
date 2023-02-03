#include <stdio.h>

#define MAX_SIZE 100

void som_matrix(int n, int a[][MAX_SIZE], int b[][MAX_SIZE], int soma[][MAX_SIZE]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            soma[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int n, i, j;
    int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE], soma[MAX_SIZE][MAX_SIZE];
    
    printf("Tamanho da natriz (nxn): ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    som_matrix(n, a, b, soma);

    printf("Soma das Matrizes:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
