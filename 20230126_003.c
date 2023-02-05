#include <stdio.h>

int main() {
    int mat[3][3];
    int k, i, j;
  
    printf("Digite os valores da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
  
    printf("Digite o valor de k: ");
    scanf("%d", &k);
  
    printf("Resultado da multiplicacao da matriz por k:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j] * k);
        }
        printf("\n");
    }
  
    return 0;
}
