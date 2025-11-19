#include <stdio.h>

int main() {
    int ruangan, zetsu_putih;
    scanf("%d", &ruangan);

    for (int i = 1; i <= ruangan; i++) {
        scanf("%d", &zetsu_putih);
        printf("%d ", i * zetsu_putih);
    }
    printf("\n");
    return 0;
}