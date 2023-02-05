#include <stdio.h>

int main() {
    int n, m, k, a, b, custo;
    int mat[100][100]; 

    printf("Digite o numero de cidades: ");
    scanf("%d", &n);

    printf("Digite o numero de itinerarios: ");
    scanf("%d", &m);

    printf("Digite os custos de transporte de cidade a cidade:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        printf("Digite o numero de cidades no itinerario %d: ", i + 1);
        scanf("%d", &k);

        int custo_total = 0;
        for (int j = 0; j < k-1; j++) {
            printf("Digite a cidade de partida e a cidade de destino: ");
            scanf("%d%d", &a, &b);
            custo_total += mat[a-1][b-1];
        }
        printf("O custo total do itinerario %d e: %d\n", i+1, custo_total);
    }

    return 0;
}
