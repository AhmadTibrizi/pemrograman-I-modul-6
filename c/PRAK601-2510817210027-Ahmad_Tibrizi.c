#include <stdio.h>

int main() {
    int baris, kolom;
    scanf("%d %d", &baris, &kolom);

    int total_elemen = baris * kolom;
    int array[total_elemen];

    for (int i = 0; i < total_elemen; i++) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            int index = (i * kolom) + j;
            printf("%d ", array[index]);
        }
        printf("\n");
    }
    return 0;
}