#include <stdbool.h>
#include <stdio.h>

bool multiplicar_matrizes(int A[][10], int B[][10], int C[][10], int linhasA, int colunasA, int colunasB, int linhasB) {
if (colunasA != linhasB) {
return false;
}

for (int i = 0; i < linhasA; i++) {
    for (int j = 0; j < colunasB; j++) {
        C[i][j] = 0;
        for (int k = 0; k < colunasA; k++) {
            C[i][j] += A[i][k] * B[k][j];
        }
    }
}

return true;
}

int main() {
int A[10][10], B[10][10], C[10][10];
int linhasA, colunasA, linhasB, colunasB;

printf("Digite o numero de linhas e colunas da matriz A: ");
scanf("%d%d", &linhasA, &colunasA);

printf("Digite os elementos da matriz A:\n");
for (int i = 0; i < linhasA; i++) {
    for (int j = 0; j < colunasA; j++) {
        scanf("%d", &A[i][j]);
    }
}

printf("Digite o numero de linhas e colunas da matriz B: ");
scanf("%d%d", &linhasB, &colunasB);

printf("Digite os elementos da matriz B:\n");
for (int i = 0; i < linhasB; i++) {
    for (int j = 0; j < colunasB; j++) {
        scanf("%d", &B[i][j]);
    }
}

if (multiplicar_matrizes(A, B, C, linhasA, colunasA, colunasB, linhasB)) {
    printf("A matriz resultante da multiplicacao e:\n");
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
} else {
    printf("Nao e possivel multiplicar as matrizes.\n");
}

return 0;
}