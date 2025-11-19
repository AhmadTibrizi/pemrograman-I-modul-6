#include <stdio.h>

int main() {
    int ordo;
    scanf("%d", &ordo);

    int matriks_a[ordo][ordo];
    int matriks_b[ordo][ordo];

    printf("Matriks A\n");
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            scanf("%d", &matriks_a[i][j]);
        }
    }

    printf("Matriks B\n");
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            scanf("%d", &matriks_b[i][j]);
        }
    }

    printf("Matriks AXB\n");
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            int total = 0;
            for (int k = 0; k < ordo; k++) {
                total += matriks_a[i][k] * matriks_b[k][j];
            }
            printf("%d ", total);
        }
        printf("\n");
    }

    return 0;
}