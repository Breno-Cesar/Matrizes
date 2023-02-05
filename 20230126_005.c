#include <stdio.h>

int main() {
    int mat[5][5];
    int i, j, soma_linha4 = 0, soma_coluna2 = 0;
  
    printf("Digite os valores da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
  
    printf("Diagonal principal:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", mat[i][i]);
    }
    printf("\n");
  
    printf("Diagonal secundaria:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", mat[i][4-i]);
    }
    printf("\n");
  
    for (j = 0; j < 5; j++) {
        soma_linha4 += mat[3][j];
    }
    printf("Soma da linha 4: %d\n", soma_linha4);
  
    for (i = 0; i < 5; i++) {
        soma_coluna2 += mat[i][1];
    }
    printf("Soma da coluna 2: %d\n", soma_coluna2);
  
    return 0;
}
