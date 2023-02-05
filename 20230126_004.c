#include <stdio.h>

int main() {
    int mat[3][3];
    int x, i, j, f = 0;
  
    printf("Digite os valores da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
  
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &x);
  
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (mat[i][j] == x) {
                printf("Valor encontrado na linha %d, coluna %d\n", i+1, j+1);
                f = 1;
                break;
            }
        }
    }
  
    if (f == 0) {
        printf("Valor nao encontrado na matriz\n");
    }
  
    return 0;
}
