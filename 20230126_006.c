#include <stdio.h>

int main() {
    int mat[5][5];
    int i, j, soma, f = 1;
  
    printf("Digite os valores da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
  
    for (i = 0; i < 5; i++) {
        soma = 0;
        for (j = 0; j < 5; j++) {
            soma += mat[i][j];
        }
        if (i == 0) {
            int ref = soma;
            for (int k = 1; k < 5; k++) {
                soma = 0;
                for (int l = 0; l < 5; l++) {
                    soma += mat[k][l];
                }
                if (soma != ref) {
                    f = 0;
                    break;
                }
            }
        }
        for (int k = 0; k < 5; k++) {
            int coluna = 0;
            for (int l = 0; l < 5; l++) {
                coluna += mat[l][k];
            }
            if (coluna != soma) {
                f = 0;
                break;
            }
        }
        int diagonal1 = 0;
        int diagonal2 = 0;
        for (int k = 0; k < 5; k++) {
            diagonal1 += mat[k][k];
            diagonal2 += mat[k][4-k];
        }
        if (diagonal1 != soma || diagonal2 != soma) {
            f = 0;
            break;
        }
    }
  
    if (f == 1) {
        printf("A matriz e um quadrado magico\n");
    } else {
        printf("A matriz nao e um quadrado magico\n");
    }
  
    return 0;
}
