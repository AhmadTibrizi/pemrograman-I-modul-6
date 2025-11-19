#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah Tidak Sama");
    } else {
        int arr1[n1];
        int arr2[n1];

        for (int i = 0; i < n1; i++) {
            scanf("%d", &arr1[i]);
        }

        for (int i = 0; i < n1; i++) {
            scanf("%d", &arr2[i]);
        }

        for (int i = 0; i < n1; i++) {
            printf("%d ", arr1[i] * arr2[i]);
        }
    }
    printf("\n");
    return 0;
}